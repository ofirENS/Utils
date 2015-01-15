classdef Smoother<handle
    % Signal smoother. A class to collect all smoothing methods 
    properties
        method
        signalIn
        signalOut        
    end
    
    methods
        function obj = Smoother
            obj.method = 'mean';
        end        
        
        function sigOut = Smooth(obj,sigIn,method,span,degree,kernel)
            obj.signalIn = sigIn;
            if ~exist('degree','var')
                degree = 1.2;
            end
            if ~exist('span','var')
                span = 15;
            end
            
            if strcmpi(method,'moving')
                
            elseif strcmpi(method,'lowess')
                obj.signalOut = smooth(sigIn,span,method);
            elseif strcmpi(method,'loess')
                obj.signalOut = smooth(sigIn,span,method);
            elseif strcmpi(method,'sgolay')
                obj.signalOut = smooth(sigIn,span,method);
            elseif strcmpi(method,'rlowess')
                obj.signalOut = smooth(sigIn,span,method);
            elseif strcmpi(method,'rloess')
                obj.signalOut = smooth(sigIn,span,method);
            elseif strcmpi(method,'gaussian')
                s = size(obj.signalIn);
                if any(s(1:2)==1)                
                    % 1d signal
                   obj.signalOut = conv(sigIn,fspecial('gaussian',[1,span],degree),'same');                
                else
                    obj.signalOut = conv2(sigIn,fspecial('gaussian',[span span],degree),'same');
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
    end
end
