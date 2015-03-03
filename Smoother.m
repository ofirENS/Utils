classdef Smoother<handle
    % Signal smoother. A class to collect all smoothing methods
    properties
        method
        nanTreatment
        signalIn
        signalOut
    end
    
    methods
        
        function obj = Smoother
            obj.method = 'mean';
            obj.nanTreatment= 'treatNaNAsZeros'; % how to tret NaN in the signal
        end
        
        function sigOut = Smooth(obj,sigIn,method,span,degree,kernel)
            obj.signalIn = sigIn;
            if ~exist('degree','var')
                degree = 1.2;
            end
            if ~exist('span','var')
                span = 15;
            end
            
            % Signal preprocessing
            obj.PreProcessSignalIn;
            
            
            if strcmpi(method,'moving')
                % unfinished
            elseif strcmpi(method,'lowess')
                %  lowess smoothing
                obj.signalOut = smooth(obj.signalIn,span,method);
            elseif strcmpi(method,'loess')
                % loess smoothing
                obj.signalOut = smooth(obj.signalIn,span,method);
            elseif strcmpi(method,'sgolay')
                % savitzky Goley filter
                obj.signalOut = smooth(obj.signalIn,span,method);
            elseif strcmpi(method,'rlowess')
                % robust lowess smoothing
                obj.signalOut = smooth(obj.signalIn,span,method);
            elseif strcmpi(method,'rloess')
                % robust loess smoothing
                obj.signalOut = smooth(obj.signalIn,span,method);
            elseif strcmpi(method,'gaussian')
                % convolution with a Gaussian kernel
                s = size(obj.signalIn);
                if any(s(1:2)==1)
                    % 1d signal
                    obj.signalOut = conv(obj.signalIn,fspecial('gaussian',[1,span],degree),'same');
                else
                    obj.signalOut = conv2(obj.signalIn,fspecial('gaussian',[span span],degree),'same');
                end
                
            elseif strcmpi(method,'iterativeGaussianMinMax')
                % Iteratively smoooth the signal with Gaussian kernel,
                % take the signal for which the number of local max is
                % minimal (minimum noise)
                obj.signalOut = obj.IterativeGaussianMinMax(obj.signalIn,span,degree);
            elseif strcmpi(method,'muLambda')
                % Apply Taubin's mu/lambda smoothing
                ml = MuLambdaSmoothing(obj.signalIn,span,degree);% activate the class
                obj.signalOut  = ml.signalOut;
                                
            elseif strcmpi(method,'kernel')
                % user supplied kernel for convolution
                if ~exist('kernel','var')
                    error('you must supply a kernel for the convolution')
                end
                % in 2d
                obj.signalOut = conv2(obj.signalIn,kernel,'same');
            elseif strcmpi(method,'bilateral')
                % apply biletaral smoothing 
                obj.signalOut = obj.Bilateral(obj.signalIn);
            else
                % do nothing
                obj.signalOut = obj.signalIn;
                
            end
            sigOut = obj.signalOut;
        end
        
        function PreProcessSignalIn(obj)
            % preprocess the signal in
            if strcmpi(obj.nanTreatment,'treatNaNAsZeros')
                obj.signalIn(isnan(obj.signalIn))= 0;
            end
        end               
                
    end
    
    methods (Access=private)
        
    end
        
    methods (Static, Access=private)
        
        function [sigOut] = IterativeGaussianMinMax(sigIn,span,degree)
            % Iteratively apply Gaussian filtering until numerical
            % instability ocurs. the stability is given by the number of
            % local max. where the optimal smoothing is determined by the
            % minimal number of local maximas after smoothing
            s   = size(sigIn);
            sig = (degree);
            
            if any(s(1:2)==1)
                % 1d signal
                sigOut = zeros(numel(sig),numel(sigIn));
                n      = zeros(numel(sig),1);
                
                for sIdx = 1:numel(sig)
                    f = fspecial('gaussian',[1,span],sig(sIdx));
                    sigOut(sIdx,:) = conv(sigIn,f,'same');
                    n(sIdx)        = numel(local_max(sigOut(sIdx,:)));
                end
                [~,ind] = min(n);
                sigOut  = sigOut(ind,:);
            else
                sigOut = zeros(s(1),s(2),numel(sig));
                n      = zeros(numel(sig),1);
                
                for sIdx = 1:numel(sig)
                    f                = fspecial('gaussian',[span,span],sig(sIdx));
                    sigOut(:,:,sIdx) = conv2(sigIn,f,'same');
                    n(sIdx)          = numel(local_max(sigOut(:,:,sIdx)));
                end
                [~,ind] = min(n);
                sigOut = sigOut(:,:,ind);
            end
        end      
        
        function [signalOut]=Bilateral(signalIn)
            % Calculate a bilateral filter with Gaussian functions 
            % currently supports 1D signals only 
            signalOut = signalIn;
            sigmaf    = 5;  %intensity relationship
            sigmag    = 5; % spatial relationship
            for pIdx = 1:numel(signalIn)
                % calculate the weight for point pIdx
                wp =  sum((1./sqrt(2*pi*sigmaf^2)).*exp(-(signalIn-signalIn(pIdx)).^2 ./(2*sigmaf^2)).*...
                         (1./sqrt(2*pi*sigmag^2)).*exp(-((1:numel(signalIn))-pIdx).^2 ./(2*sigmag^2)));
                signalOut(pIdx) = (1/wp) *sum(signalIn.*(1./sqrt(2*pi*sigmaf^2)).*exp(-(signalIn-signalIn(pIdx)).^2 ./(2*sigmaf^2)).*...
                         (1./sqrt(2*pi*sigmag^2)).*exp(-((1:numel(signalIn))-pIdx).^2 ./(2*sigmag^2)));
            end
        end

    end
end
