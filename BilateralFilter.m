        function [signalOut]=BilateralFilter(signalIn,sigmaf,sigmag,envRad)
            % Calculate a bilateral filter with Gaussian functions 
            % currently supports 1D signals only 
            signalOut = signalIn;
%             if ~exist('sigmaf','var')
%             sigmaf    = 5.8;  %intensity relationship
%             end
%             if ~exist('sigmag','var')
%             sigmag    = 2; % spatial relationship
%             end
%             if ~exist('envRad','var')
%             envRad    = 40;
%             end
            
%             [x,y]     = meshgrid(1:size(signalIn,2),1:size(signalIn,1));
%             f         = @(x,x0,sigma) (1/(sqrt(2*pi*sigma))).*exp(-(x-x0).^2 ./(2*sigma^2));
            
            m         = size(signalIn,1);
            n         = size(signalIn,2);
            for rIdx = 1:m                
                for cIdx = 1:n
                % calculate the weight for point pIdx
                mx    = min(rIdx+envRad,m);
                Mx    = max(rIdx-envRad,1);
                my    = min(cIdx+envRad,n);
                My    = max(cIdx-envRad,1);
                kx    = Mx:mx;
                ky    = My:my;
                env   = signalIn(kx,ky);
                [y,x] = meshgrid(1:size(env,2),1:size(env,1));
                centerX = rIdx-Mx+1;
                centerY = cIdx-My+1;
                s1   = (1/(sqrt(2*pi*sigmaf))).*exp(-(env-env(centerX,centerY)).^2 ./(2*sigmaf^2)).*...
                       (1/(sqrt(2*pi*sigmag))).*exp(-(x-x(centerX,centerY)).^2 ./(2*sigmag^2)).*...
                        (1/(sqrt(2*pi*sigmag))).*exp(-(y-y(centerX,centerY)).^2 ./(2*sigmag^2));
%                 s1   = f(env,env(centerX,centerY),sigmaf).*f(x,x(centerX,centerY),sigmag).*f(y,y(centerX,centerY),sigmag);
                wp   = sum(s1(:)); 

                s2                   = env.*s1;
                signalOut(rIdx,cIdx) = (1/wp).*sum(s2(:));

                end
            end
%             
%             for pIdx = 1:numel(signalIn)
%                 wp =  sum((1./sqrt(2*pi*sigmaf^2)).*exp(-(signalIn-signalIn(pIdx)).^2 ./(2*sigmaf^2)).*...
%                          (1./sqrt(2*pi*sigmag^2)).*exp(-((1:numel(signalIn))-pIdx).^2 ./(2*sigmag^2)));
%                 signalOut(pIdx) = (1/wp) *sum(signalIn.*(1./sqrt(2*pi*sigmaf^2)).*exp(-(signalIn-signalIn(pIdx)).^2 ./(2*sigmaf^2)).*...
%                          (1./sqrt(2*pi*sigmag^2)).*exp(-((1:numel(signalIn))-pIdx).^2 ./(2*sigmag^2)));
%             end
%             end
        end