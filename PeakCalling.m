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
        
        backgroundRejectionVal % rejection value using the background distribution
        signalRejectionVal
        
        rejectionTval
        
        peakList
        
    end
    
    methods
        
    function obj = PeakCalling()
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
            obj.params.stOptions  = statset('Robust','on');
            obj.params.rejectionThresh      = 0.99; 
    end
    
    function FindPeaks(obj, signals)
        obj.numSignals = size(signals,2);
        obj.signals    = signals;
        obj.EstimateMeanSignal;
        obj.EstimateBackgroundDistribution
        obj.EstimateSignalDistribution
        obj.EstimateRejectionDistribution
    end
    
    function EstimateMeanSignal(obj)
        m = mean(obj.signals,1);
        if strcmpi(obj.params.fitType,'model')
        d = 1:numel(m);
        [f, ~] =fit(d',m',obj.params.fitModel, obj.params.fOptions);
        obj.meanSignal = (1/sum(d.^(-f.slope)))*d.^(-f.slope);
        elseif strcmpi(obj.params.fitType,'loess')
            obj.meanSignal = smooth(m,round(numel(m)/10));
        end
    end
    
    function EstimateBackgroundDistribution(obj)
        % estimate the distribution over all distances
        obj.zScores = zeros(size(obj.signals,1),size(obj.signals,2));
        for dIdx = 1:size(obj.signals,2)
            s = std(obj.signals(:,dIdx));
            if s~=0
              obj.zScores(:,dIdx) = (obj.signals(:,dIdx)-obj.meanSignal(dIdx))./s;
            end
        end
        obj.globalMinZ = min(obj.zScores(:));
        % combine all z Score from all distances, assuming they have
        % similar background distribution 
        obj.backgroundDistribution= fitdist(obj.zScores(:)-obj.globalMinZ+eps,'wbl','options',obj.params.stOptions);
        obj.backgroundRejectionVal = obj.backgroundDistribution.icdf(obj.params.rejectionThresh);
    end
    
    function EstimateSignalDistribution(obj)
        for dIdx = 1:size(obj.signals,2)
            obj.signalDistribution(dIdx).dist = makedist('wbl');
            obj.signalDistribution(dIdx).dist = fitdist(obj.zScores(:,dIdx)-obj.globalMinZ+eps,'wbl','options',obj.params.stOptions);
            % Calculate the value for above which we treat observations as
            % peaks (corresponding to 0.99% of each cdf)
            obj.signalRejectionVal(dIdx) = obj.signalDistribution(dIdx).dist.icdf(obj.params.rejectionThresh);
        end
    end
    
    function EstimateRejectionDistribution(obj)
        % calculate the distribution of the difference between rejection
        % region of signals and rejection region of background 
        tVal = (obj.signalRejectionVal-obj.backgroundRejectionVal)./std(obj.signalRejectionVal);
        
        % Fit this statistics with a normal distribution 
        n = fitdist(tVal','normal','options',obj.params.stOptions);
        obj.rejectionTval = n.icdf(0.99);
                        
        % return to the zScores and eliminate type I errors 
        peaks = obj.zScores>(obj.rejectionTval)*std(obj.signalRejectionVal) +obj.backgroundRejectionVal-obj.globalMinZ;
        [obj.peakList(:,1),obj.peakList(:,2)] = find(peaks);
    end
    
    function DisplayPeaks(obj)
        peakMat = zeros(size(obj.signals,1), size(obj.signals,2));
        for pIdx = 1:size(obj.peakList,1)
            peakMat(obj.peakList(pIdx,1),obj.peakList(pIdx,2))=1;
        end
        figure, imshow(peakMat)
    end
    
    end
end