classdef MuLambdaSmoothing<handle
    % Implementation of the Taubin lambda/mu smoothing method
    % Input:
    % sigIn    - 1 or 2D signal
    % nHoodRad - an integer specifying half the neighborhood size
    % sig      -  std for the Gaussian smoothing kernel
    
    % 1D example
    % freq   = -pi:.1:pi;
    % sigIn  = sin(freq)+randn(1,numel(t));
    % sigIn  = sigIn./sum(sigIn);
    % sigOut = TaubinMuLambdaSmoothing(sigIn,10,3)
    
    % 2D example:
    %
    % [x,y]  = meshgrid(-pi:.1:pi);
    % sigIn  = sin(x+y).*cos(x.*y)+ randn(size(x)).*0.3;
    % sigOut = TaubinMuLambdaSmoothing(sigIn,10,1)
    
    properties
        % filter's parameters
        params= struct('kPb',0.3,'deltaPb',0.2,'kSb',0.9,'deltaSb',0.4,'kernelAngle',pi/4);
        signalIn
        signalOut
    end
    
    methods
        
        function obj = MuLambdaSmoothing(signalIn,nHoodRad,sig)
        
            % set default parameters
            obj.SetDefaultParams;
            
            % pre-process signal in
            obj.signalIn = obj.PreProcessSignalIn(signalIn);
            
            % Find the optimal filter's parameters
            [lambda,mu,numSteps] = obj.FindOptimalParamsForSmoothing(obj.params.kPb,obj.params.kSb,obj.params.deltaPb,obj.params.deltaSb);
                                                            
            % Get the convolution kernel
            convKernel = obj.GetConvolutionKernel(obj.signalIn,nHoodRad,sig,obj.params.kernelAngle);
            
            % smooth the signal in
            obj.signalOut = obj.SmoothSignal(obj.signalIn,convKernel,lambda,mu,numSteps);
                                                
        end
        
    end
    
    methods (Access=private)
        
        function SetDefaultParams(obj)
            %           Filter's parameters
            % Must satisfy:
            % 0<kPb<kSb<2
            % 0<deltaPb
            % 0<deltaSb<1
            obj.params.kPb     = 0.3;% pass band freq.
            obj.params.deltaPb = 0.2;% pass band ripple
            obj.params.kSb     = 0.9;% stop band freq.
            obj.params.deltaSb = 0.4;% stop band ripple
            
            % Check parameter limits
            assert(obj.params.kSb<2,'kSb must be <2');
            assert(obj.params.kPb<obj.params.kSb,'kPb must be <kSb')
            assert(obj.params.deltaSb<1,'deltaSb must be <1')
            assert(obj.params.deltaPb>0,'deltaPb must be >0');
        end
        
        function [lambda,mu,numSteps]= FindOptimalParamsForSmoothing(obj,kPb,kSb,deltaPb,deltaSb)
            % find the minimum of a function given the nonlinear constraints
            % The variables by order of appearance are: lambda, mu, N
            % for A*x<b
            A       = [1 1 0; 1 0 0; 0 0 -1];
            b       = [0; 1/kSb;0];
            
            % for Aeq*x = beq
            Aeq = [];
            beq = [];
            
            % lower bound
            lb = [0, -1, 1];
            % upper bound
            ub = [1, 0, 100];
            
            % initial point
            x0 = [0.5,-0.6,20];
            
            opts      = optimoptions(@fmincon,'MaxIter',1000,'TolX',1e-8,'TolFun',1e-12);
            [optParams] = fmincon(@(x)obj.MinimizeFun(x,kPb),x0,A,b,Aeq,beq,lb,ub,@(x)obj.NonLinConstraint(x,kSb,deltaSb,deltaPb),opts);
            lambda    = optParams(1);
            mu        = optParams(2);
            numSteps  = ceil(optParams(3));
        end
    end
    
    methods (Static)
        
        function sigOut= SmoothSignal(sigIn,convKernel,lambda,mu,numSteps)
            % smooth the signal in using the convolution kernel and the filter's
            % parameters
            nTag   = sigIn; % temp signal
            s      = size(sigIn);
            if any(s==1)    % for 1D
                for nIdx = 1:numSteps
                    % Apply positive scale factor
                    c    = conv(nTag,convKernel,'same');
                    nTag = nTag+lambda*(c-nTag);
                    
                    % Apply negative scale factor
                    c    = conv(nTag,convKernel,'same');
                    nTag = nTag+mu*(c-nTag);
                    
                end
            else % for 2D
                for nIdx = 1:numSteps
                    % Apply positive scale factor
                    c    = conv2(nTag,convKernel,'same');
                    nTag = nTag+lambda*(c-nTag);
                    
                    % Apply negative scale factor
                    c    = conv2(nTag,convKernel,'same');
                    nTag = nTag+mu*(c-nTag);
                end
            end
            
            sigOut = nTag;
        end
        
        function PlotFrequencyPolynomial(lambda,mu,numSteps,kSb,kPb)
            % Plot the polynomial in the freq k
            f  = @(k,lambda,mu,N) ((1-lambda*k).*(1-mu*k)).^N;
            figure,
            freq = 0:.01:2;
            plot(freq,f(freq,lambda,mu,numSteps)), hold on,
            plot([kSb kSb],[0 1],...
                [kPb kPb],[0 1],'r',...
                [kSb 2],[f(kSb,lambda,mu,numSteps),f(kSb,lambda,mu,numSteps)],'g',...
                [0 kPb], [1,1],'g')
            
            title(gca,'f(k) = (1-\lambda k)(1-\mu k))^N')
        end
        
        function DisplaySmoothSignal(sigIn,sigOut)
            % Compare in and out signals
            s  = size(sigIn);
            f  = figure;
            if any (s==1)
                % 1D
                a = axes('Parent',f,'NextPlot','Add','FontSize',12);
                plot(a,sigIn,'DisplayName','signal In','LineWidth',2)
                plot(a,sigOut,'r','DisplayName','signal Out','LineWidth',2)
                legend(get(a,'Children'))
                
            else
                % 2D
                h(1)= subplot(1,2,1);
                surf(sigIn),title(h(1),'Signal In'),
                axis vis3d,
                h(2)= subplot(1,2,2);
                surf(sigOut),
                axis vis3d, title(h(2),'Signal Out'),
                cf = get(f,'Children');
                
                % Store link object on first subplot axes
                key = 'graphics_linkprop';
                hlink = linkprop([cf(1), cf(2)],{'CameraPosition','CameraUpVector','XLim','YLim'});
                setappdata(h(1),key,hlink);
                cameratoolbar
            end
        end
        
        function CalculateSignalFFT(sigIn)
            % Calculate and display the fft for a signal
            s = size(sigIn);
            figure, title('fft sigIN')
            if any(s==1)
                f = abs(fftshift(fft(sigIn)));
                plot(f)
            else
                f = abs(fftshift(fft2(sigIn))); % the intensity
                imagesc(f);
                colormap hot
            end
        end
    end
    
    methods (Static,Access=private)
                        
        function convKernel = GetConvolutionKernel(sigIn,nHoodRad,sig,theta)
            % Create the 1 or 2D convolution kernel
            s = size(sigIn);
            if any(s==1)
                % For 1D signal
                convKernel = fspecial('gaussian',[1,2*nHoodRad+1],sig);
                convKernel(nHoodRad) = 0;
                convKernel           = convKernel./sum(convKernel(:)); % normalize weights
            else
                % For 2D signal
                if ~exist('theta','var')
                    theta = -pi/4;
                end
                a     = (cos(theta)^2)/(2*sig^2) +(sin(theta)^2)/(2*sig^2);
                b     = -(sin(theta)^2)/(4*sig^2) +(sin(2*theta))/(4*sig^2);
                c     = (sin(theta)^2)/(2*sig^2) +(cos(theta)^2)/(2*sig^2);
                [x,y] = meshgrid(-nHoodRad:nHoodRad,-nHoodRad:nHoodRad);
                % f = @(x,y,A,sig) (1/sqrt(2*pi*(2*sig^2))).*exp(-x'*A*x).*exp(-y'*A*y);
                convKernel = (1/sqrt(2*pi*(2*sig^2))).*exp(-(a*x.^2+2*b*x.*y+c*y.^2));
                
                %     convKernel = fspecial('gaussian',[2*nHoodRad+1,2*nHoodRad+1],sig);
                convKernel(nHoodRad,nHoodRad) = 0;
                convKernel = convKernel./sum(convKernel(:)); % normalize weights
            end
        end                
        
        function sigIn = PreProcessSignalIn(sigIn)
            % Signal in pre-processing
            sigIn(isnan(sigIn))= 0;
        end
        
        function [c, ceq]= NonLinConstraint(x,kSb,deltaSb,deltaPb)
            % The vector x is [lambda,mu,N]
            c(1) = ((((x(1)-x(2))^2)./(-4*x(1)*x(2))).^x(3))-1-deltaPb;
            c(2) = (((1-x(1)*kSb).*(1-x(2)*kSb)).^x(3)) -deltaSb;
            ceq  = []; % nonlinear equalities
        end
        
        function f = MinimizeFun(x,kPb)
            % The function to be minimized
            % The vector x is [lambda,mu,N]
            f = ((1./x(1)) +(1./x(2)) -(kPb)).^2;
        end
                
    end
    
end