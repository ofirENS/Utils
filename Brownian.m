classdef Brownian<handle
    %%% Description
    %
    % Get a sample of a realization of a Brownian path by either the Levy
    % construction or the ____ construction
    % the std of the sampled process is then std*(1/2^(scale+1)/2)
    properties
        position
        tcf % time correlation function of direction correlation
        time
        params 
        debug  
        handles
    end
    
    properties (Access=private)
        eq
    end
    
    methods
        
        function obj = Brownian(varargin)
            % parameters should come in a name-value pairs in varargin
            % to see the list of parameter names, see SetDefaultParams
            % function
            
            obj.SetDefaultParams
            
            obj.SetInputParams(varargin)
            
        end
        
        function GetPath(obj)
            % construct the brownian motion trajectory by iterative
            % refinement
            
            % reset the time correlation function
            obj.tcf = [];
            if strcmpi(obj.params.constructionType,'Levy')
                % the Levy process mimicks the sampling of a Brownian path
                % on different time scales, begining with coarse scale
                % through consecutive refinements.
                for rIdx = 1:obj.params.realizations
                    
                    Y      = obj.GetNoise(2);
                    T      = obj.GetBinaryPartition(1);
                    
                    % Initial point
                    for dIdx = 1:obj.params.dimension
%                         dimName = sprintf('%s%s','dim',num2str(dIdx));
                        % set the begining and end points
                        prevPosition(dIdx,1:2) = T.*Y(:,dIdx)';
                    end
                    
                    for nIdx = 2:obj.params.scale
                        T                 = obj.GetBinaryPartition(nIdx);
                        oldPoints         = 1:2:numel(T);
                        newPoints         = 2:2:numel(T);
                        
                        Y            = obj.GetNoise(numel(newPoints));
                        for dIdx = 1:obj.params.dimension
%                             dimName = sprintf('%s%s','dim',num2str(dIdx));
                            
                            newPosition(dIdx,oldPoints)= prevPosition(dIdx,:);
                            pairSum = obj.PairSum(prevPosition(dIdx,:));
                            
                            % linear interpolation between old points
                            newPosition(dIdx,newPoints) = 0.5*(pairSum)+...
                                (1/(2^((nIdx+1)/2)))*Y(:,dIdx)';
                            % the expected STD is (1/(2^((nIdx+1)/2)))                            
                        end
                        obj.position{rIdx} = newPosition;
                        prevPosition       = newPosition;                        
                    end
                    newPosition  = [];
                    prevPosition = [];
                    %                     oldPosition = [];
                    % truncate the path according to the number of points
                    % chosen 
                    obj.position{rIdx}=obj.position{rIdx}(:,1:obj.params.numPoints);
                end
                
            elseif strcmpi(obj.params.constructionType,'normal')
%                 obj.time = obj.GetBinaryPartition(obj.params.scale);
                obj.params.noiseSTD = obj.time(2)-obj.time(1);
                for rIdx = 1:obj.params.realizations
                    y = obj.GetNoise(obj.params.numPoints-1);
                    c = cumsum(y);
                    for dIdx = 1:obj.params.dimension
                        obj.position{rIdx}(dIdx,:)=[0;c(:,dIdx)]';
                    end
                end
            end
        end
        
        function PlotPath(obj)
            % Plot the trajectories
            % construct axes
            f = figure('Units','norm');
            a = axes('Units','normalized',...
                     'Tag','mainAxes',...
                     'NextPlot','Add',...
                     'Parent',f,...
                     'Box','on',...
                     'FontSize',40);
            obj.handles.graphical.mainAxes = a;
            if obj.params.dimension <4
                for rIdx = 1:obj.params.realizations
                    if obj.params.dimension ==1
                        plot(a,obj.time,obj.position{rIdx},'.-');
                        xlabel(a,'Time'), ylabel(a,'Position')
                    elseif obj.params.dimension ==2
                        c = rand(1,3);
                        line('XData',obj.position{rIdx}(1,:),...
                            'YData',obj.position{rIdx}(2,:),...
                            'Parent',a,...
                            'Color',c,...
                            'DisplayName',['path ' num2str(tIdx)]);
                        
                        % add start and end point
                        line('XData',obj.position{rIdx}([1,end]),...
                            'YData',obj.position{rIdx}([1 end]),...
                            'Parent',a,...
                            'HandleVisibility','off',...
                            'Marker','o',...
                            'LineStyle','none',...
                            'MarkerSize',4,...
                            'MarkerFaceColor',c);
                        
                        xlabel(a,'X'),ylabel(a,'Y')
                    elseif obj.params.dimension ==3
                        c = rand(1,3);
                        line('XData',obj.position{rIdx}(1,:),...
                            'YData',obj.position{rIdx}(2,:),...
                            'ZData',obj.position{rIdx}(3,:),...
                            'Parent',a,...
                            'DisplayName', ['path ' num2str(rIdx)],...
                            'Color',c);
                        % add start and end point
                        line('XData',obj.position{rIdx}(1,[1,end]),...
                            'YData',obj.position{rIdx}(2,[1 end]),...
                            'ZData',obj.position{rIdx}(3,[1 end]),...
                            'Parent',a,...
                            'HandleVisibility','off',...
                            'Marker','o',...
                            'LineStyle','none',...
                            'MarkerSize',4,...
                            'MarkerFaceColor',c);
                        
                        xlabel(a,'X'),ylabel(a,'Y'), zlabel(a,'Z')
                        cameratoolbar
                    end
                end
                daspect([1 1 1]);
            end
            drawnow
            
        end
        
        function Debug(obj)% should not be used for now
            % get point distance statistics
            if obj.params.debugMode
                % Construct axes
                f = figure('Units','normalized', 'Tag','debugFigure');
                figure(f)
                obj.handles.graphical.debugFigure = f;
                d = zeros(numel(obj.position{1}(1,:))-1,obj.params.dimension);
                
                for dIdx = 1:obj.params.dimension
                    dimName                      = sprintf('%s%s','dim',num2str(dIdx));
                    d(:,dIdx)                    = (diff(obj.position{1}(dIdx,:)))';
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
        
        function TimeCorrelationFunction(obj)
            % calculate the time correlation function (TCF)
            %             as <A(0)A(t)> with <.> the average over realizations at time
            % %             t
            % The time correlation function calculates the correlation between the
            % increments of the Brownian particles
            
            if isempty(obj.tcf)
                obj.tcf = zeros(numel(obj.time)-1,obj.params.dimension,obj.params.realizations);
                for rIdx = 1:obj.params.realizations
                    for tIdx = 2:numel(obj.time)
                        for dIdx = 1:obj.params.dimension
                            a0 = obj.position{rIdx}(dIdx,2)-obj.position{rIdx}(dIdx,1);
                            at = obj.position{rIdx}(dIdx,tIdx)-obj.position{rIdx}(dIdx,tIdx-1);
                            obj.tcf(tIdx-1,dIdx,rIdx) = a0*at;
                        end
                    end
                end
            end
            obj.tcf = mean(obj.tcf,3);
            f = figure('Units','norm','Name','Time Correlation Function');
            a = axes('Parent',f,'Units','norm','NextPlot','Add','FontSize',30);
            c ={'r','g','b'};
            for dIdx =1:obj.params.dimension
                line('XData',obj.time(2:end),...
                    'YData',obj.tcf(:,dIdx),...
                    'Color',c{dIdx},...
                    'Parent',a,...
                    'LineWidth',3,...
                    'DisplayName',['dim ' num2str(dIdx)])
            end
            title('Time correlation function')
            xlabel(a,'Time')
            ylabel(a,'TCF');
        end
    end
    
    methods (Access=private)
        
        function Y = GetNoise(obj,numPoints)
            % Get random variables from the standard normal distribution
            % the output is a column vector
            %             Y = zeros(numPoints,obj.params.dimension);
            Y = obj.params.noiseSTD*randn(numPoints,obj.params.dimension)+obj.params.noiseMean;
        end
        
        function SetDefaultParams(obj)
            obj.params.dimension    = 3; % dimension of the paths
            obj.params.realizations = 1; % number of paths to generate
            obj.params.numPoints    = 512; % number of points in the path 
            obj.params.scale        = nextpow2(obj.params.numPoints)+1; % meaning we will have 2^10 points
            obj.params.constructionType = 'Levy'; % type of path construction. curently supports only Levy
            obj.params.noiseMean    = 0;
            obj.params.noiseSTD     = 1;
            % Set partition equation
            obj.eq.partition = @(n)(0:2^(n-1))./(2.^(n-1));
        end
        
        function SetInputParams(obj,argin)
            for fIdx = 1:2:numel(argin)
                if isfield(obj.params,argin{fIdx})
                    obj.params.(argin{fIdx}) = argin{fIdx+1};
                else
                    error('%s%s', argin{fIdx},' is not a valid parm name');
                end
            end
            obj.time = 0:obj.params.numPoints-1;
            obj.params.scale = nextpow2(obj.params.numPoints)+1;
        end
    end
    
    methods (Static, Access=private)
        
        function c = PairSum(vec)
            % sum pairs of adjacent entries in vec
            %             n = numel(vec);
            
            n = numel(vec);
            c = sum([vec(1:n-1);vec(2:n)]);
            %             c = zeros(1,n-1);
            %             for vIdx = 1:n-1
            %                 c(1,vIdx) = vec(1,vIdx)+vec(1,vIdx+1);
            %             end
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