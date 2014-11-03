classdef PeakCalling<handle
    % this class applies the peakCalling procedure to find peaks in an
    % expression arrays
    properties
        params
        numSignals
        
        signals
        meanSignal
        
        zScores
        globalMinZ
        
        backgroundDistribution
        signalDistribution
        rejectionValDistribution
        
        backgroundRejectionVal % rejection value using the background distribution
        signalRejectionVal
        
        rejectionTval
        
        peakList
        
    end
    
    methods
        
        function obj = PeakCalling()
            obj.params.smoothingSpan        = 7; % smoothing span for the loess smoothing
            obj.params.fitType              = 'loess';% options [model loess]
            obj.params.fitModel             = fittype(@(slope,x)(1./(sum(x.^(-slope)))).*x.^(-slope));
            obj.params.fOptions             = fitoptions(obj.params.fitModel);
            obj.params.fOptions.TolX        = 1e-8;
            obj.params.fOptions.TolFun      = 1e-8;
            obj.params.fOptions.MaxFunEvals = 1e3;
            obj.params.fOptions.MaxIter     = 1e3;
            obj.params.fOptions.StartPoint  = 1.5; % [slope]
            obj.params.fOptions.Lower       = 0.05; % [slope]
            obj.params.fOptions.Robust      = 'Bisquare';
            
            % statistics optimization params
            obj.params.stOptions            = statset('Robust','on',...
                                                      'TolFun',1e-12,...
                                                      'TolX',1e-12,...
                                                      'MaxFunEvals',1e5,...
                                                      'MaxIter',1e5,...
                                                      'TolTypeFun','rel',...
                                                      'TolTypeX','rel',...
                                                      'RobustWgtFun','bisquare');
            obj.params.rejectionThresh      = 0.95; % set the cdf value for the background signal rejection
            obj.params.rejectionTNew        = 0.95;% the rejection region of the distribution of (rejections values - background rejection)/std(rejection)
        end
        
        function FindPeaks(obj, signals)
            obj.numSignals = size(signals,2);
            obj.signals    = signals;
            obj.EstimateBackgroundSignal;
            obj.EstimateBackgroundDistribution
            obj.EstimateSignalDistribution
            obj.EstimateRejectionDistribution
            obj.MarkPeaks
        end
        
        function EstimateBackgroundSignal(obj)
            m = mean(obj.signals,1);
            if strcmpi(obj.params.fitType,'model')
                d      = 1:numel(m);
                [f, ~] = fit(d',m',obj.params.fitModel, obj.params.fOptions);
                obj.meanSignal = (1/sum(d.^(-f.slope)))*d.^(-f.slope);
            elseif strcmpi(obj.params.fitType,'loess')
                obj.meanSignal = smooth(m,obj.params.smoothingSpan);%round(numel(m)/10));
            elseif strcmpi(obj.params.fitType,'mean')
                obj.meanSignal = m;% leave it as the mean at each distance
            end
        end
        
        function EstimateBackgroundDistribution(obj)
            % estimate the distribution over all distances
            obj.CalculateZScores
            % combine all z Score from all distances, assuming they have
            % similar background distribution
            
            z      = obj.zScores(:);
            %         cens   = z<0;
            %         z(z<0) = eps;
            
            obj.backgroundDistribution = fitdist(z,'wbl','options',obj.params.stOptions);
            obj.backgroundRejectionVal = obj.backgroundDistribution.icdf(obj.params.rejectionThresh);
        end
        
        function CalculateZScores(obj)
            obj.zScores = zeros(size(obj.signals,1),size(obj.signals,2));
            s           = zeros(1,size(obj.signals,2));
            for dIdx = 1:size(obj.signals,2)
                obj.zScores(:,dIdx) = ((obj.signals(:,dIdx)-obj.meanSignal(dIdx)));
                s(dIdx)             = std(obj.signals(:,dIdx));
                if s(dIdx)~=0
                    obj.zScores(:,dIdx) = obj.zScores(:,dIdx)./s(dIdx);
                end
                %               m(dIdx) = min(obj.zScores(:,dIdx));
                %               if m(dIdx)<0
                %                   obj.zScores(:,dIdx) = obj.zScores(:,dIdx)-m(dIdx)+eps;
                %               end
                
            end
            
            [obj.globalMinZ.value, obj.globalMinZ.signal] = min(obj.zScores(:));
            [obj.globalMinZ.signal, ~] = ind2sub(size(obj.signals),obj.globalMinZ.signal);
            if obj.globalMinZ.value<0
                obj.zScores = obj.zScores-obj.globalMinZ.value+eps;
            end
        end
        
        function EstimateSignalDistribution(obj)
            obj.params.stOptions.Robust='off';
            for dIdx = 1:size(obj.signals,2)
                obj.signalDistribution(dIdx).dist = makedist('wbl');
                z       = obj.zScores(:,dIdx);
                %             cens    = z<0;
                %             z(cens) = eps;
                obj.signalDistribution(dIdx).dist = fitdist(z,'wbl','options',obj.params.stOptions);
                % Calculate the value for above which we treat observations as
                % peaks (corresponding to 0.99% of each cdf)
                obj.signalRejectionVal(dIdx) = obj.signalDistribution(dIdx).dist.icdf(obj.params.rejectionThresh);
            end
            obj.params.stOptions.Robust='on';
        end
        
        function EstimateRejectionDistribution(obj)
            % calculate the distribution of the difference between rejection
            % region of signals and rejection region of background
            tVal  = (obj.signalRejectionVal-obj.backgroundRejectionVal);
            sTval = std(obj.signalRejectionVal);
            tVal  = tVal./sTval;
            
            % Fit this statistic with a normal distribution [need to prove that
            % the variable is nornally distributed]
            obj.rejectionValDistribution = fitdist(tVal','normal','options',obj.params.stOptions);
            
            % set the new rejection value
            obj.rejectionTval = obj.rejectionValDistribution.icdf(obj.params.rejectionTNew)*sTval+obj.backgroundRejectionVal;
        end
        
        function MarkPeaks(obj)
            % return to the zScores and eliminate type I errors
            peaks = (obj.zScores)>(obj.rejectionTval);
            [obj.peakList(:,1),obj.peakList(:,2)] = find(peaks);
        end
        
        function DisplayPeaks(obj)
            peakMat = zeros(size(obj.signals,1), size(obj.signals,2));
            figure, surf(obj.signals),colormap summer, hold on
            for pIdx = 1:size(obj.peakList,1)
                % places the zScore value
                peakMat(obj.peakList(pIdx,1),obj.peakList(pIdx,2))=...
                    obj.zScores(obj.peakList(pIdx,1),obj.peakList(pIdx,2))./sum(obj.zScores(:,obj.peakList(pIdx,2)));
%                     obj.signalDistribution(obj.peakList(pIdx,1)).dist.cdf(obj.zScores(obj.peakList(pIdx,1), obj.peakList(pIdx,2)));
                plot3(obj.peakList(pIdx,2), obj.peakList(pIdx,1),obj.signals(obj.peakList(pIdx,1), obj.peakList(pIdx,2)),'or','MarkerSize',10,'LineWidth',2)
            end
%             figure, surf(peakMat)
        end
        
        function DisplaySignalDistributions(obj,distType)
            if ~exist('distType','var')
                distType = 'cdf';
            end
            
            f = figure;
            a = axes('Parent', f,'NextPlot','add');
            t = 0:.001:max(obj.signalRejectionVal);
            for dIdx = 1:obj.numSignals
                line('XData',t,...
                    'YData',obj.signalDistribution(dIdx).dist.(distType)(t),...
                    'DisplayName',['Distance ',num2str(dIdx)],...
                    'Parent',a);
            end
            % display background distributioin
            line('XData',t,...
                'YData',obj.backgroundDistribution.(distType)(t),...
                'DisplayName','Background signal',...
                'Parent',a,...
                'Color','r',...
                'LineWidth',4);
            
            % add line representing the rejection
            line('XData',[obj.rejectionTval obj.rejectionTval],...
                'YData',[0 1],...
                'Parent',a,...
                'Color','r',...
                'DisplayName','rejection value',...
                'LineStyle','-.');
        end
        
        function DisplayRejectionValDistribution(obj)
            f = figure;
            a = axes('Parent',f,'NextPlot','Add','FontSize',30);
            for dIdx = 1:obj.numSignals
                line('XData',dIdx,...
                    'YData',obj.signalRejectionVal(dIdx),...
                    'DisplayName',['distance', num2str(dIdx)],...
                    'Parent',a,...
                    'Marker','o',...
                    'MarkerFaceColor','b',...
                    'MarkerSize',6)
            end
            
            line('XData', [1 size(obj.signals,2)],...
                'YData',[obj.rejectionTval obj.rejectionTval],...
                'Color','r',...
                'Parent',a,...
                'LineWidth',4,...
                'LineStyle','-.');
            
            line('XData', [1 size(obj.signals,2)],...
                'YData',[obj.backgroundRejectionVal obj.backgroundRejectionVal],...
                'Color','r',...
                'Parent',a,...
                'LineWidth',4,...
                'LineStyle','-');
            
        end
        
        function DisplayZScoreFit(obj,dist)
            % display the distribution of z score for a certain distance
            f  = figure;
            a  = axes('Parent',f,'NextPlot','Add');
            for dIdx =1:numel(dist)
                [v,e] = ecdf(obj.zScores(:,dist(dIdx)));
                line('XData',e,'YData',v,'Parent',a)
                line('XData',e,'YData',obj.signalDistribution(dist(dIdx)).dist.cdf(e),...
                    'Color','r');
            end
        end
        
    end
end