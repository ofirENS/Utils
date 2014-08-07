classdef Brownian<handle
    % Get a sample of a realization of a Brownian path by either the Levy
    % construction or the ____ construction
    % the std of the sampled process is then std*(1/2^(scale+1)/2)
    properties
        position
        time
        params
        eq
        debug
        handles
    end
    
    methods
        function obj = Brownian(varargin)
            % parameters should come in a name-value pairs in varargin
            % to see the list of parameter names, see SetDefaultParams
            % function 
            
            obj.SetDefaultParams
            
            obj.SetInputParams(varargin)

            obj.Initialize
                        
            obj.Construct
            
            obj.PlotPath
            
            obj.Debug
        end
        
        function SetDefaultParams(obj)
            obj.params.dimension  = 3;            
            obj.params.scale      = 10; % meaning we will have 2^10 points
            obj.params.constructionType = 'Levy';
            obj.params.noiseMean  = 0;
            obj.params.noiseSTD   = 1;
            obj.params.debugMode  = false;
            obj.params.plot       = false;
        end
        
        function SetInputParams(obj,argin)
            for fIdx = 1:2:numel(argin)
                obj.params.(argin{fIdx}) = argin{fIdx+1};
            end
        end
        
        function Initialize(obj)
            % Set partition equation
            obj.eq.partition = @(n)(0:2^(n-1))./(2.^(n-1));             
        end
        
        function Construct(obj)
            % construct the brownian motion trajectory by iterative
            % refinement 
            if strcmpi(obj.params.constructionType,'Levy')
                Y      = obj.GetNoise(2);                
                T      = obj.GetBinaryPartition(1);
                
                % Initial point
                for dIdx = 1:obj.params.dimension
                    dimName = sprintf('%s%s','dim',num2str(dIdx));
                    prevPosition.(dimName) = T.*Y(:,dIdx)';
                end
                
                for nIdx = 2:obj.params.scale
                    T                 = obj.GetBinaryPartition(nIdx);
                    oldPoints         = 1:2:numel(T);
                    newPoints         = 2:2:numel(T);                    
                    Y                 = obj.GetNoise(numel(newPoints)); 
                 for dIdx = 1:obj.params.dimension
                    dimName = sprintf('%s%s','dim',num2str(dIdx));
                   
                    newPosition.(dimName)(oldPoints) = prevPosition.(dimName);
                    pairSum = obj.PairSum(prevPosition.(dimName));
                    newPosition.(dimName)(newPoints) = 0.5*(pairSum)+...
                                        (1/(2^((nIdx+1)/2)))*Y(:,dIdx)';
                   % the expected STD is (1/(2^((nIdx+1)/2)))
                    obj.position.(dimName) = newPosition.(dimName);
                                                          
                 end                   
                    prevPosition = newPosition;
                    obj.time = T;                   
                end                
            end
        end        
        
        function PlotPath(obj)
            if obj.params.plot
            % Plot the trajectories 
            % construct axes 
            a = axes('Units','normalized',...
                     'Tag','mainAxes');
                 obj.handles.graphical.mainAxes = a;
            if obj.params.dimension <4
                if obj.params.dimension ==1 
                    plot(a,obj.time,obj.position.dim1,'.-');
                    xlabel('Time'), ylabel('Position')
                elseif obj.params.dimension ==2 
                    plot(a,obj.position.dim1,obj.position.dim2,'.-');
                    xlabel('X'),ylabel('Y')
                elseif obj.params.dimension ==3
                    plot3(a,obj.position.dim1,obj.position.dim2,obj.position.dim3);
                    xlabel('X'),ylabel('Y'), zlabel('Z')
                    cameratoolbar
                end
            end            
            drawnow           
            end
        end
                
        function Y = GetNoise(obj,numPoints)
            % Get random variables from the standard normal distribution
            % the output is a column vector
            Y = zeros(numPoints,obj.params.dimension);
            for dIdx = 1:obj.params.dimension
              Y(:,dIdx) = normrnd(obj.params.noiseMean,obj.params.noiseSTD,numPoints,1);
            end
        end
        
        function Debug(obj)
            % get point distance statistics
            if obj.params.debugMode
            % construct axes
            f = figure('Units','normalized', 'Tag','debugFigure');
            figure(f)
            obj.handles.graphical.debugFigure = f;
            d = zeros(numel(obj.position.dim1)-1,obj.params.dimension);
            
            for dIdx = 1:obj.params.dimension 
                dimName                      = sprintf('%s%s','dim',num2str(dIdx));
                d(:,dIdx)                    = (diff(obj.position.(dimName)))';
                obj.debug.meanDist.(dimName) = mean(d(:,dIdx));
                obj.debug.stdDist.(dimName)  = std(d(:,dIdx));
                [h.(dimName), bins.(dimName)] = hist(d(:,dIdx),150);
                subplot(obj.params.dimension,1,dIdx), bar(bins.(dimName),h.(dimName))
                ylabel(dimName)
                expectedSTD = (1/(2^((obj.params.scale-1+1)/2)));
                xlabel(sprintf('%s%s%s%s','Mean-E(Mean): ',num2str(obj.debug.meanDist.(dimName)-obj.params.noiseMean),...
                    '  STD- E(STD): ', num2str(obj.debug.stdDist.(dimName)-expectedSTD)))
            end
             n                        = sqrt(sum(d.^2,2));             
             obj.debug.distance       = n;
             obj.debug.meanDist.total = mean(n);
             obj.debug.stdDist.total  = std(n);             
            end
        end
         
        end
    
    methods (Static)
        
        function c = PairSum(vec)
            % sum pairs of adjacent entries in vec
            n = numel(vec);
            c = zeros(1,n-1);
            for vIdx = 1:n-1
                c(1,vIdx) = vec(1,vIdx)+vec(1,vIdx+1);
            end   
        end
        
        function T = GetBinaryPartition(scale)
            % get a division of the unit interval into obj.params.scale
            % binary diviasions
            n = scale;
            k = 0:2^(n-1);            
            T = k./(2.^(n-1));
        end
    end
end