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
                obj.signalOut = obj.IterativeGaussianMinMax(sigIn,span,degree);
            elseif strcmpi(method,'muLambda')
                % apply mu lambda smoothing
                obj.signalOut = obj.MuLambda(sigIn,span,degree);
                
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
        
        function [sigOut] = MuLambda(obj,sigIn,nHoodRad,sig)%TODO: optimize
            % Apply Taubin's mu|lambda smoothing for 1D signal
            
            lambda = 0.1:.1:0.9;
            nTag   = sigIn;
            s      = size(sigIn);
            
            if any(s==1)
                % for 1D
                for nIdx = 1:numel(lambda);
                    % apply positive factor
                    nTemp = nTag;
                    for sIdx = 1:numel(sigIn)
                        % define the neighborhood of each point
                        neighb = sIdx-nHoodRad:sIdx+nHoodRad;
                        f      = fspecial('gaussian',[1,numel(neighb)],sig);
                        f      = f(neighb>0 & neighb<numel(sigIn));
                        neighb = neighb(neighb>0 & neighb<numel(sigIn));
                        % apply positive moving filter
                        nTemp(sIdx) = nTag(sIdx)+lambda(nIdx)*sum((nTag(neighb)-nTag(sIdx)).*f);
                    end
                    
                    nTag = nTemp;
                    
                    for sIdx = 1:numel(sigIn)
                        % define the neighborhood of each point
                        neighb = sIdx-nHoodRad:sIdx+nHoodRad;
                        f      = fspecial('gaussian',[1,numel(neighb)],sig);
                        f      = f(neighb>0 & neighb<numel(sigIn));
                        neighb = neighb(neighb>0 & neighb<numel(sigIn));
                        % apply positive moving filter
                        nTemp(sIdx) = nTag(sIdx)-(lambda(nIdx)+0.1)*sum((nTag(neighb)-nTag(sIdx)).*f);
                    end
                    
                    nTag = nTemp;
                end
                
                
            else
                %for 2D                
                for nIdx = 1:numel(lambda);
                    % apply positive factor
                    nTemp = nTag;
                    for s1Idx = 1:s(1)
                        for s2Idx = 1:s(2)
                        % define the neighborhood of each point
                        neighb1 = s1Idx-nHoodRad:s1Idx+nHoodRad;
                        neighb2 = s2Idx-nHoodRad:s2Idx+nHoodRad;                        
                        f      = fspecial('gaussian',[numel(neighb1),numel(neighb2)],sig);
                        % truncate indices exceeding the signal size
                        f      = f(neighb1>0 & neighb1<s(1),neighb2>0 & neighb2<s(2));
                        
                        neighb1 = neighb1(neighb1>0 & neighb1<s(1));
                        neighb2 = neighb2(neighb2>0 & neighb2<s(2));
                        % apply positive moving filter
                        sTemp = (nTag(neighb1,neighb2)-nTag(s1Idx,s2Idx)).*f;
                        nTemp(s1Idx,s2Idx) = nTag(s1Idx,s2Idx)+lambda(nIdx)*sum(sTemp(:));
                        end
                    end
                    
                    nTag = nTemp;
                    
                    for s1Idx = 1:s(1)
                        for s2Idx = 1:s(2)
                        % define the neighborhood of each point
                        neighb1 = s1Idx-nHoodRad:s1Idx+nHoodRad;
                        neighb2 = s2Idx-nHoodRad:s2Idx+nHoodRad;                        
                        f      = fspecial('gaussian',[numel(neighb1),numel(neighb2)],sig);
                        % truncate indices exceeding the signal size
                        f      = f(neighb1>0 & neighb1<s(1),neighb2>0 & neighb2<s(2));
                        
                        neighb1 = neighb1(neighb1>0 & neighb1<s(1));
                        neighb2 = neighb2(neighb2>0 & neighb2<s(2));
                        % apply positive moving filter
                        sTemp = (nTag(neighb1,neighb2)-nTag(s1Idx,s2Idx)).*f;
                        nTemp(s1Idx,s2Idx) = nTag(s1Idx,s2Idx)-(lambda(nIdx)+0.1)*sum(sTemp(:));
                        end
                    end
                    
                    nTag = nTemp;
                end
                
            end
            sigOut = nTag;
        end
    end
end
