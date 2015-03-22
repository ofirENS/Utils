        function [sigOut] = InterpolateZeroValuesInSignal(sigIn,zeroInterpolationMethod)
            % remove nan values by interpolation of the signal
            sigOut = sigIn;
            s      = size(sigIn);
            if any(s(1:2)==1) % for 1D signal
                zeroInds   = find(sigIn==0 |isnan(sigIn));
                noZeroInds = find(~(sigIn==0) & ~isnan(sigIn));
                if ~isempty(zeroInds) && numel(noZeroInds)>2
                    % Interpolate the signal in the nan positions
                    x     = noZeroInds;
                    y     = sigIn(x);
                    sigOut(zeroInds)= interp1(x,y,zeroInds,zeroInterpolationMethod);% for the boundary values
                    % extrapolate the end values
                    
                    f =find(~isnan(sigOut),1,'first');
                    if f~=1
                        sigOut(1:f) = sigOut(f);
                    end
                    f= find(~isnan(sigOut),1,'last');
                    if f~=numel(sigOut)
                        sigOut(f:end) = sigOut(f);
                    end                                        
                end
            else
                %                 sigOut(isnan(sigIn))=0;
                [zeroInds(:,1), zeroInds(:,2)]     = find(sigOut==0);
                [noZeroInds(:,1), noZeroInds(:,2)] = find(~(sigIn==0) & ~isnan(sigIn));
%                 sigNoZero = sigIn(:);
%                 sigNoZero = sigNoZero(sigNoZero ~=0 & ~isnan(sigNoZero));
                if ~isempty(zeroInds)
                    % Interpolate the signal in the nan positions
                    %                     [x,y] = meshgrid(1:size(sigOut,1),1:size(sigOut,2));
                    intPoints = interp2(noZeroInds(:,2), noZeroInds(:,1),sigOut,zeroInds(:,2), zeroInds(:,1),zeroInterpolationMethod);
                    s         = sub2ind(size(sigOut),zeroInds(:,1), zeroInds(:,2));
                    sigOut(s) = intPoints;
                end
            end
        end