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
        
        function sigOut = Smooth(obj,sigIn,method,span,degree)
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
                obj.signalOut = conv(sigIn,fspecial('gaussian',[1,span],degree),'same');                
            end
            sigOut = obj.signalOut;
        end
    end
end
