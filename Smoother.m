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
            
            % signal preprocessing 
            obj.PreProcessSignalIn;
                        
            
            if strcmpi(method,'moving')
                
            elseif strcmpi(method,'lowess')
                obj.signalOut = smooth(obj.signalIn,span,method);
            elseif strcmpi(method,'loess')
                obj.signalOut = smooth(obj.signalIn,span,method);
            elseif strcmpi(method,'sgolay')
                obj.signalOut = smooth(obj.signalIn,span,method);
            elseif strcmpi(method,'rlowess')
                obj.signalOut = smooth(obj.signalIn,span,method);
            elseif strcmpi(method,'rloess')
                obj.signalOut = smooth(obj.signalIn,span,method);
            elseif strcmpi(method,'gaussian')
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
                s = size(obj.signalIn);
                sig = (0.1:.2:10);
               
                if any(s(1:2)==1)                
                    % 1d signal
                    sigOut = zeros(numel(sig),numel(obj.signalIn));
                    n      = zeros(numel(sig),1);
                    
                    for sIdx = 1:numel(sig)
                     f = fspecial('gaussian',[1,span],sig(sIdx));
                     sigOut(sIdx,:) = conv(obj.signalIn,f,'same');
                     n(sIdx)        = numel(local_max(sigOut(sIdx,:)));
                    end
                    [~,ind] = min(n);
                   obj.signalOut = sigOut(ind,:);
                else
                     sigOut = zeros(s(1),s(2),numel(sig));
                     n      = zeros(numel(sig),1);
                     % treat NaN as zeros 
                     
                    for sIdx = 1:numel(sig)
                     f                = fspecial('gaussian',[span,span],sig(sIdx));
                     sigOut(:,:,sIdx) = conv2(obj.signalIn,f,'same');
                     n(sIdx)          = numel(local_max(sigOut(:,:,sIdx)));
                    end
                    [~,ind] = min(n);
                    obj.signalOut = sigOut(:,:,ind);                                                            
                end 
                
            elseif strcmpi(method,'kernel')
                % user supplied kernel for convolution 
                if ~exist('kernel','var')
                    error('you must supply a kernel for the convolution')                    
                end
                % in 2d 
                obj.signalOut = conv2(sigIn,kernel,'same');
                
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
end
