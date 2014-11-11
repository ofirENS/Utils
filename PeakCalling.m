classdef PeakCalling<handle
    % this class applies the peakCalling procedure to find peaks in an
    % expression arrays. The input is a matrix of n signals of the same
    % length
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
            obj.SetDefaultParams;
        end
        
        function SetDefaultParams(obj)
            obj.params.peaksDirection       = 'high';  % find peaks in high/low/twoSides
            obj.params.smoothingSpan        = 10;       % smoothing span for the loess smoothing
            obj.params.fitType              = 'loess'; % options [model/loess/mean]
            obj.params.minimumZSamples      = 10;  % minimum number of z values required to fit a distribution
            % fOptions applies only for fitType=model
            obj.params.fitModel             = fittype(@(slope,x)(1./(sum(x.^(-slope)))).*x.^(-slope));% in case of fitType='model'
            obj.params.fOptions             = fitoptions(obj.params.fitModel);
            obj.params.fOptions.TolX        = 1e-8;
            obj.params.fOptions.TolFun      = 1e-8;
            obj.params.fOptions.MaxFunEvals = 1e3;
            obj.params.fOptions.MaxIter     = 1e3;
            obj.params.fOptions.StartPoint  = 1.5;  % [slope] % applies for fitType=model
            obj.params.fOptions.Lower       = 0.05; % [slope]
            obj.params.fOptions.Robust      = 'Bisquare';
            
            % Statistics optimization params
            obj.params.backgroundZDistribution   = 'wbl';
            obj.params.signalZDistribution       = 'wbl';
            obj.params.rejectionValDistribution  = 'wbl';
            obj.params.stOptions                 = statset('Robust','on',...
                                                           'TolFun',1e-12,...
                                                           'TolX',1e-12,...
                                                           'MaxFunEvals',1e5,...
                                                           'MaxIter',1e5,...
                                                           'TolTypeFun','rel',...
                                                           'TolTypeX','rel',...
                                                           'RobustWgtFun','bisquare');
            obj.params.peakExludeNeighborhoodSpan = [5, 10, 15]; % the radius of the neighborhood around each peak used for the scoring of the peak 
            obj.params.rejectionThresh      = 0.99; % set the cdf value for the background signal rejection
            obj.params.rejectionTNew        = 0.99; % the rejection region of the distribution of (rejections values - background rejection)/std(rejection)
        end
        
        function FindPeaks(obj, signals)
            obj.numSignals = size(signals,2);
            obj.signals    = obj.MakePositive(signals);            
            obj.EstimateBackgroundSignal;
            obj.CalculateZScores
            obj.CalculateBackgroundDistribution;
            obj.CalculateZScoreDistribution
            obj.CalculateRejectionDistribution
            obj.MarkPeaks
            obj.ExcludePeaks
            obj.ApplyFDROnPeaks
        end
        
        function EstimateBackgroundSignal(obj)
            % calculate the mean signal
           
            if strcmpi(obj.params.fitType,'model')
                m      = obj.MeanIgnoreNaN(obj.signals);
                d      = 1:numel(m);
                [f, ~] = fit(d',m',obj.params.fitModel, obj.params.fOptions);
                obj.meanSignal = (1/sum(d.^(-f.slope)))*d.^(-f.slope);
            elseif strcmpi(obj.params.fitType,'loess')     
                 m      = obj.MeanIgnoreNaN(obj.signals);
                 obj.meanSignal = smooth(m,obj.params.smoothingSpan);
%                 obj.meanSignal = smooth(obj.signals,obj.params.smoothingSpan);%round(numel(m)/10));
%                 obj.meanSignal = mean(reshape(obj.meanSignal,size(obj.signals)));
            elseif strcmpi(obj.params.fitType,'mean')             
                obj.meanSignal = obj.MeanIgnoreNaN(obj.signals);% leave it as the mean at each distance
            end
        end
        
        function CalculateBackgroundDistribution(obj)
            % Esstimate the distribution over all distances
            % combine all z Score from all distances, assuming they have
            % similar background z distribution
            z    = obj.zScores(:);
            inds = ~isnan(z);
            obj.backgroundDistribution = fitdist(z(inds),obj.params.backgroundZDistribution,...
                'options',obj.params.stOptions);
            obj.backgroundRejectionVal = obj.backgroundDistribution.icdf(obj.params.rejectionThresh);
            
        end
        
        function CalculateZScores(obj)
            %             For each site, calculate the z score
            obj.zScores = nan(size(obj.signals,1),size(obj.signals,2));
            s           = zeros(1,size(obj.signals,2));
            for dIdx = 1:size(obj.signals,2)
                inds = ~isnan(obj.signals(:,dIdx));
                if sum(double(inds))>obj.params.minimumZSamples
                if strcmpi(obj.params.peaksDirection,'twoSides')
                    z = (abs(obj.signals(inds,dIdx)-obj.meanSignal(dIdx)));
                elseif strcmpi(obj.params.peaksDirection,'high')
                    z = (obj.signals(inds,dIdx)-obj.meanSignal(dIdx));
                elseif strcmpi(obj.params.peaksDirection,'low')
                    warning('peaksDirection=low is unsupported yet, changing to twoSides')
                    z = (abs(obj.signals(inds,dIdx)-obj.meanSignal(dIdx)));
                end
                
                obj.zScores(inds,dIdx) = z;
                % calculate the standard error
                s(dIdx)             = std(obj.signals(inds,dIdx));%/sqrt(sum(double(inds)));
                if s(dIdx)~=0
                    obj.zScores(inds,dIdx) = obj.zScores(inds,dIdx)./s(dIdx);
                end
                else
                    % keep it nan
                end
            end
            
            [obj.globalMinZ.value, obj.globalMinZ.signal] = obj.MinIgnoreNaN(obj.zScores(:));
            [obj.globalMinZ.signal, ~] = ind2sub(size(obj.signals),obj.globalMinZ.signal);
            if obj.globalMinZ.value<0
                obj.zScores = obj.zScores-obj.globalMinZ.value+eps;
            end
        end
        
        function CalculateZScoreDistribution(obj)
            obj.params.stOptions.Robust = 'on';
            for dIdx = 1:size(obj.signals,2)
                inds = ~isnan(obj.zScores(:,dIdx));%&obj.zScores(:,dIdx)>eps;
                obj.signalDistribution(dIdx).dist = makedist(obj.params.signalZDistribution);
                z       = obj.zScores(inds,dIdx);
                if numel(z)>obj.params.minimumZSamples
                    cens = z==eps;
                    obj.signalDistribution(dIdx).dist = fitdist(z,obj.params.signalZDistribution,'Censoring',cens,...
                        'options',obj.params.stOptions);
                    % Calculate the value for above which we treat observations as
                    % peaks (corresponding to 0.99% of each cdf)
                    obj.signalRejectionVal(dIdx) = obj.signalDistribution(dIdx).dist.icdf(obj.params.rejectionThresh);
                else
                    obj.signalRejectionVal(dIdx)=eps;
                end
            end
            obj.params.stOptions.Robust = 'on';
        end
        
        function CalculateRejectionDistribution(obj)
            % Calculate the distribution of the difference between rejection
            % region of signals and rejection region of background
            
            tVal = obj.signalRejectionVal;
            % subtract the mean values from the rejection distribution          
            tVal = tVal(tVal~=eps);
            
            % Fit this statistic with a distributionof choice            
            obj.params.stOptions.Robust = 'on';
            obj.rejectionValDistribution = fitdist(tVal',obj.params.rejectionValDistribution,...
                'options',obj.params.stOptions);
            
            % set the new rejection value
            obj.rejectionTval = obj.rejectionValDistribution.icdf(obj.params.rejectionTNew);%-obj.globalMinZ.value;%...
            %                                                                   obj.backgroundRejectionVal;%+mTval;
        end
        
        function MarkPeaks(obj)
            % return to the zScores and eliminate type I errors
            peaks = (obj.zScores)>(obj.rejectionTval);
            [obj.peakList(:,1),obj.peakList(:,2)] = find(peaks);
            obj.peakList = sortrows(obj.peakList,1);
        end
        
        function ExcludePeaks(obj)
            % Check for peaks local neighborhood and exclude peaks 
            includeList = false(size(obj.peakList,1),1);
            for pIdx = 1:size(obj.peakList,1)
                % Examine the local behavior of peaks around the reported
                % peak 
                peakNum    = obj.peakList(pIdx,2);
                pv         = false(numel(obj.params.peakExludeNeighborhoodSpan),1);
                
                for dIdx = 1:numel(obj.params.peakExludeNeighborhoodSpan)
                    % indices of peak neighborhood
                    inds    = max(1,peakNum-obj.params.peakExludeNeighborhoodSpan(dIdx)):...
                        min(size(obj.signals,2),peakNum+obj.params.peakExludeNeighborhoodSpan(dIdx));
                   
                    % fit a distribution to the zScores in the neighborhood of
                    % the peak
                    peakZVal = obj.zScores(obj.peakList(pIdx,1),obj.peakList(pIdx,2))+obj.globalMinZ.value;
                    inds = setdiff(inds,peakNum);% remove the peak from the dist fitting
                    z = obj.zScores(:,inds)+obj.globalMinZ.value;
                    z = z(:);
                    m = obj.MinIgnoreNaN(z);
                    if m<=0
                     z = z-m+eps;
                     peakZVal = peakZVal-m+eps;
                    end
                    z = z(~isnan(z)); % remove nan values
                    peakBgDist = fitdist(z,obj.params.backgroundZDistribution,...
                        'options',obj.params.stOptions);                     
                    
                    pv(dIdx) = peakBgDist.cdf(peakZVal)>obj.params.rejectionThresh;
                end
                % decide according to the concensus 
                includeList(pIdx) = sum(pv)>=numel(pv)/2;  
                
            end
            % filter the peaks             
            obj.peakList = obj.peakList(includeList,:);
           
           
        end
        
        function ApplyFDROnPeaks(obj)
            % Apply FDR on peaks' pvvalues according to background
            % distribution 
            p = zeros(size(obj.peakList,1),1);
            for pIdx = 1:size(obj.peakList,1)
              p(pIdx) = 1-obj.backgroundDistribution.cdf(obj.zScores(obj.peakList(pIdx,1), obj.peakList(pIdx,2)));
            end
            q = mafdr(p,'Method','bootstrap','Lambda',min(p):.0001:max(p),'Showplot',false);
            includeList = q<0.01;
            % exclude peaks 
            obj.peakList = obj.peakList(includeList,:);
        end
        
        function DisplayPeaks(obj)
            peakMat = zeros(size(obj.signals,1), size(obj.signals,2));
            figure, surf(obj.signals),colormap summer, hold on
            for pIdx = 1:size(obj.peakList,1)
                % places the zScore value
                peakMat(obj.peakList(pIdx,1),obj.peakList(pIdx,2))=...
                    obj.zScores(obj.peakList(pIdx,1),obj.peakList(pIdx,2))./mean(obj.zScores(obj.peakList(pIdx,1),:));
                %                     obj.signalDistribution(obj.peakList(pIdx,1)).dist.cdf(obj.zScores(obj.peakList(pIdx,1), obj.peakList(pIdx,2)));
                plot3(obj.peakList(pIdx,2), obj.peakList(pIdx,1),obj.signals(obj.peakList(pIdx,1), obj.peakList(pIdx,2)),...
                    'or','MarkerSize',10,'LineWidth',2)
            end
            figure, surf(peakMat)
        end
        
        function DisplaySignalDistributions(obj,distType)
            if ~exist('distType','var')
                distType = 'cdf';
            end
            
            f = figure;
            a = axes('Parent', f,'NextPlot','add');
            t = obj.MinIgnoreNaN(obj.zScores(:)):.001:obj.MaxIgnoreNaN(obj.zScores(:));
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
            if ~exist('dist','var')
                dist = 1:size(obj.signals,2);
            end
            for dIdx =1:numel(dist)
                if sum(~isnan(obj.zScores(:,dist(dIdx))))>obj.params.minimumZSamples
                [v,e] = ecdf(obj.zScores(:,dist(dIdx)));
                line('XData',e,...
                    'YData',v,...
                    'Parent',a,...
                    'DisplayName',['empirical CDF distance ', num2str(dist(dIdx))] )
                line('XData',e,...
                    'YData',obj.signalDistribution(dist(dIdx)).dist.cdf(e),...
                    'Color','r',...
                    'Parent',a,...
                    'DisplayName',['fitted CDF distance ', num2str(dist(dIdx))]);
                else
                    line('XData',nan,...
                        'YData',nan,...
                        'Parent',a,...
                        'DisplayName',['not enough data signal', num2str(dist(dIdx))] )
                     line('XData',nan,...
                        'YData',nan,...
                        'Color','r',...
                        'Parent',a,...
                        'DisplayName',['not enough data ', num2str(dist(dIdx))]);
                end
            end
        end
        
        function TestZScoreDistributionSimilarityToNull(obj)
            % for each one of the empirical distribution of the zScore,
            % test its similarity to the null (background distribution)
            backgroundSignal = obj.zScores(:);
            inds = ~isnan(backgroundSignal)&backgroundSignal~=eps;
            backgroundSignal = backgroundSignal(inds);
            testResult       = zeros(size(obj.zScores,2),1);
            for dIdx = 1:size(obj.zScores,2)
                zScore = obj.zScores(:,dIdx);
                inds   = zScore~=eps & ~isnan(zScore);
                zScore = zScore(inds);
                % run Kolmogorov smirnoff test
                testResult(dIdx) = kstest2(zScore,backgroundSignal);
            end
            figure, plot(testResult,'o'), title('comparison to mean');
            
            % run pairwise distribution
            
        end
    end
    
    methods (Access=private)
        
    end
    
    methods (Static)
        function m = MeanIgnoreNaN(signalIn)
            % calculate the mean of a matrix ignoring nan values,
            % the mean gives the mean of each column
            m = zeros(1,size(signalIn,2));
            for mIdx = 1:size(signalIn,2)
                inds = ~isnan(signalIn(:,mIdx));
                m(mIdx) = mean(signalIn(inds,mIdx));
            end
        end
        
        function [m,ind] = MinIgnoreNaN(signalIn)
            % find the minimum of a signal ignoring NaN values
            inds = isnan(signalIn);
            signalIn(inds) = inf;
            [m,ind] = min(signalIn);
        end
        
        function [m,ind] = MaxIgnoreNaN(signalIn)
            % find the minimum of a signal ignoring NaN values
            inds = isnan(signalIn);
            signalIn(inds) = -inf;
            [m,ind] = max(signalIn);
        end
        
        function signalOut   = MakePositive(signalIn)
            % Make the signals positive 
            signalOut = signalIn;
            m         = min(signalOut(:));
            if m<=0
                signalOut = signalOut-m+eps;
            end            
        end
    end
end