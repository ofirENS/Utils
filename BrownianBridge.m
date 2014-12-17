classdef BrownianBridge<handle
    %%% Description
    %
    % This class cxreate a Brownian bridge between two points in any dimension
    %% Public properties
    %
    properties
        params=struct('startPt',[],'endPt',[],'numPtd',[],'numBridges',[]);
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
            for bIdx = 1:obj.params.numBridges    
                for dIdx = 1:numel(obj.params.startPt)
                  dimName = sprintf('%s%s','dim',num2str(dIdx));
                   w(:,dIdx) = obj.handles.classes.brownian.position(bIdx).(dimName)';
                end
           
            
%             wb  = [w(1,:);zeros(2*obj.numPts-1,dim)];
            for pIdx=1:obj.params.numPts
                obj.paths{bIdx}(pIdx,:)  = obj.params.startPt+w(pIdx,:)-((pIdx-1)/(obj.params.numPts-1))*(w(obj.params.numPts,:)-obj.params.endPt+obj.params.startPt);                
            end
            
            end
        end
        
        %% Plot
        function Plot(obj)%unfinished
            % plot
            f= figure;
            a= axes('Units','norm','Parent',f,'NextPLot','Add');
           for bIdx = 1:obj.params.numBridges
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
            obj.params.startPt    = [0 0 0];
            obj.params.endPt      = [0 0 0];
            obj.params.numPts     = 100;
            obj.params.numBridges = 20;
        end
        
        %% Set Input parameters
        function SetInputParams(obj,argin)% needs more work
            for fIdx = 1:2:numel(argin)
                if isfield(obj.params,argin{fIdx})
                    obj.params.(argin{fIdx}) = argin{fIdx+1};
                else
                    error('%s%s', argin{fIdx},' is not a valid parm name');
                end
            end
            dim = numel(obj.params.startPt);
            obj.handles.classes.brownian.params.dimension    = dim;
            obj.handles.classes.brownian.params.realizations = obj.params.numBridges;
            obj.handles.classes.brownian.params.scale        = nextpow2(2*obj.params.numPts-1)+1;
        end
        
    end
end
