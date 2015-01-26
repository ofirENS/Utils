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
                % apply mu lambda smoothing
                obj.signalOut = obj.MuLambda(obj.signalIn,span,degree);
                
            elseif strcmpi(method,'kernel')
                % user supplied kernel for convolution
                if ~exist('kernel','var')
                    error('you must supply a kernel for the convolution')
                end
                % in 2d
                obj.signalOut = conv2(obj.signalIn,kernel,'same');
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
        
        function [sigOut] = IterativeGaussianMinMax(obj,sigIn,span,degree)
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
        
        function [sigOut] = MuLambda(obj,sigIn,nHoodRad,sig)
            % Apply Taubin's mu|lambda smoothing 
            %===== Solve the inequalities to find mu lambda and N =====
            % Filter's params
            % Must satisfy:
            % 0<kPb<kSb<2
            % 0<deltaPb
            % 0<deltaSb<1
            kPb     = 0.1;% pass band freq.
            deltaPb = 0.3;% pass band ripple
            kSb     = 0.9;% stop band freq.
            deltaSb = 0.5;% stop band ripple
            
            % Check parameter limits
            assert(kSb<2);
            assert(kPb<kSb)
            assert(deltaSb<1)
            assert(deltaPb>0);
            
            % find the optimal parameters
            [lambda,mu,numSteps] = obj.MuLambdaFindOptimalParamsForSmoothing(kPb,deltaPb,kSb,deltaSb);
            
            %             % plot the frequency polynomial
            %             PlotFrequencyPolynomial(lambda,mu,numSteps,kSb,kPb)
            
            nTag         = sigIn; % temp signal
            
            s      = size(sigIn);
            if any(s==1)
                % For 1D signal
                
                f = fspecial('gaussian',[1,2*nHoodRad+1],sig);
                f(nHoodRad) = 0;
                f           = f./sum(f(:)); % normalize weights
                for nIdx = 1:numSteps
                    % Apply positive scale factor
                    c    = conv(nTag,f,'same');
                    nTag = nTag+lambda*(c-nTag);
                    
                    % Apply negative scale factor
                    c    = conv(nTag,f,'same');
                    nTag = nTag+mu*(c-nTag);
                    
                end
            else
                % For 2D signal
                f = fspecial('gaussian',[2*nHoodRad+1,2*nHoodRad+1],sig);
                f(nHoodRad,nHoodRad) = 0;
                f = f./sum(f(:)); % normalize weights
                for nIdx = 1:numSteps
                    % Apply positive scale factor
                    c    = conv2(nTag,f,'same');
                    nTag = nTag+lambda*(c-nTag);
                    
                    % Apply negative scale factor
                    c    = conv2(nTag,f,'same');
                    nTag = nTag+mu*(c-nTag);
                end
            end
            sigOut = nTag;
        end
        
        
    end
    
    methods (Access=private)
        
        function [lambda,mu,numSteps]= MuLambdaFindOptimalParamsForSmoothing(obj,kPb,deltaPb,kSb,deltaSb)
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
            x0 = [0.5,-1.6,20];
            
            opts      = optimoptions(@fmincon,'MaxIter',1000,'TolX',1e-8,'TolFun',1e-12);
            [optParams] = fmincon(@(x)obj.MuLambdaMinimizeFun(x,kPb),x0,A,b,Aeq,beq,lb,ub,@(x)obj.MuLambdaNonLinConstraint(x,kSb,kPb,deltaSb,deltaPb),opts);
            lambda    = optParams(1);
            mu        = optParams(2);
            numSteps  = ceil(optParams(3));
        end
    end
    
    
    methods (Static, Access=private)
        
        % mu lambda method private function
        
        
        function f = MuLambdaMinimizeFun(x,kPb)
            % The function to be minimized
            
            % The vector x is [lambda,mu,N]
            f = ((1./x(1)) +(1./x(2)) -(kPb)).^2;%x(3);% minimize the number of iterations for the filter
        end
        
        function [c, ceq]= MuLambdaNonLinConstraint(x,kSb,kPb,deltaSb,deltaPb)
            % The vector x is [lambda,mu,N]
            c(1) = ((((x(1)-x(2))^2)./(-4*x(1)*x(2))).^x(3))-1-deltaPb;
            c(2) = (((1-x(1)*kSb).*(1-x(2)*kSb)).^x(3)) -deltaSb;
            
            ceq  = [];%(1./x(1)) +(1./x(2)) -(1/kPb);
            
        end
    end
end
