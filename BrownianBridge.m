classdef BrownianBridge<handle
    %%% Description
    %
    % This class cxreate a Brownian bridge between two points in any dimension
    %% Public properties
    %
    properties
        startPt    % bridge starting point
        endPt      % bridge end point
        numPts      % numPoints in the bridge
        numBridges % number of realizations
        paths
    end
    %% Private properties
    
    properties (Access=private)
        handles
    end
    
    %%% Public methods
    %
    methods
        %% Constructor
        %
        function obj = BrownianBridge(varargin)
            % set default params
            obj.SetDefualtParams;
            % initialize Brownian class
            obj.handles.classes.brownian = Brownian;
            % set input params
            obj.SetInputParams(varargin);
        end
        
        %% GetBridge
        %
        % Create a brownian bridge starting at startPt and ending in endPt with
        % numPts time points in between
        function GetBridge(obj)
            
            obj.handles.classes.brownian.GetPath;
            for bIdx = 1:obj.numBridges    
                for dIdx = 1:numel(obj.startPt)
                  dimName = sprintf('%s%s','dim',num2str(dIdx));
                   w(:,dIdx) = obj.handles.classes.brownian.position(bIdx).(dimName)';
                end
           
            
%             wb  = [w(1,:);zeros(2*obj.numPts-1,dim)];
            
            for pIdx=1:obj.numPts
                wb(pIdx,:)  = obj.startPt+w(pIdx,:)-((pIdx-1)/(obj.numPts-1))*(w(obj.numPts,:)-obj.endPt+obj.startPt);                
            end
            
            obj.paths{bIdx} = wb;
            end
        end
        
        %% Plot
        function Plot(obj)%unfinished
            % plot
            f= figure;
            a= axes('Units','norm','Parent',f,'NextPLot','Add');
           for bIdx = 1:obj.numBridges
               c= rand(1,3);
               line('XData',obj.paths{bIdx}(:,1),...
                    'YData',obj.paths{bIdx}(:,2),...
                    'ZData',obj.paths{bIdx}(:,3),...
                    'Color',c,...
                    'Parent',a,...
                    'DisplayName',['path ' num2str(bIdx)]);
           end
           daspect([1 1 1]);
           cameratoolbar;
        end
    end
    
    %%% Private methods
    %
    methods (Access=private)
        
        %% Set Default parameters
        function SetDefualtParams(obj)
            obj.startPt    = [0 0 0];
            obj.endPt      = [0 0 0];
            obj.numPts     = 100;
            obj.numBridges = 20;
        end
        
        %% Set Input parameters
        function SetInputParams(obj,argin)% needs more work
            for fIdx = 1:2:numel(argin)
                if isfield(obj,argin{fIdx})
                    obj.(argin{fIdx}) = argin{fIdx+1};
                else
                    error('%s%s', argin{fIdx},' is not a valid parm name');
                end
            end
            dim = numel(obj.startPt);
            obj.handles.classes.brownian.params.dimension    = dim;
            obj.handles.classes.brownian.params.realizations = obj.numBridges;
            obj.handles.classes.brownian.params.scale        = nextpow2(2*obj.numPts-1)+1;
        end
        
    end
end
