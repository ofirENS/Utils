classdef BrownianBridge<handle
    %%% Description
    %  
    % This class cxreate a Brownian bridge between two points in any dimension
    
    %%% Public properties
    %
    properties
        params = struct('startPoint',[],...
                        'endPoint',[],...
                        'numPoints',[],...
                        'realizations',[],...
                        'dimension',[],...
                        'constructionType','normal',...
                        'noiseSTD',[]);
        paths
        cdf 
    end
    
    %%% Private properties
    %
    properties (Access=private)
        handles
    end
    
    %%% Public methods
    %
    methods
        %%% Constructor
        %
        function obj = BrownianBridge(varargin)
            % varargin is a name value pair of class properties
            
            % set default params
            obj.SetDefualtParams;
            
            % set input params
            obj.SetInputParams(varargin);
            
        end
        
        %%% GetBridge
        % Create a brownian bridge starting at startPoint and ending in endPoint with
        % numPoints time points in between
        function GetBridge(obj)
            
            % initialize Brownian class
            obj.handles.classes.brownian = Brownian('realizations',obj.params.realizations,...
                                                    'numPoints',obj.params.numPoints,...
                                                    'dimension', obj.params.dimension,...
                                                    'constructionType',obj.params.constructionType,...
                                                    'noiseSTD',obj.params.noiseSTD);
            
            % get a Brownian path
            obj.handles.classes.brownian.GetPath;
            
            % transform the path into a bridge
            for bIdx = 1:obj.params.realizations
                w = obj.handles.classes.brownian.position{bIdx}';
                for pIdx = 1:obj.params.numPoints
                    obj.paths{bIdx}(pIdx,:)  = obj.params.startPoint+w(pIdx,:)-...
                        ((pIdx-1)/(obj.params.numPoints-1))*...
                        (w(obj.params.numPoints,:)-obj.params.endPoint+obj.params.startPoint);
                end
            end
        end
        
        %%% Plot
        function Plot(obj)%unfinished
            % plot
            f = figure('Units','norm');
            a = axes('Units','norm',...
                     'Parent',f,...
                     'NextPLot','Add',...
                     'FontSize',40);
                 
           for bIdx = 1:obj.params.realizations
               c = rand(1,3);
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
        
        function CDF(obj)
            for rIdx = 1:obj.params.realizations
                for dIdx = 1:obj.params.dimension
                 [p,b] = ecdf(obj.paths{rIdx}(:,dIdx));   
                 obj.cdf(rIdx).vals{dIdx} = b;
                 obj.cdf(rIdx).prob{dIdx} = p;
                end                
            end
        end
        
        function Reset(obj)
            % erase all saved paths 
            obj.paths = cell(1);
        end
    end
    
    %%% Private methods
    %
    methods (Access=private)
        
        %%% Set Default parameters
        %
        function SetDefualtParams(obj)
            obj.params.startPoint    = [0 0 0];
            obj.params.endPoint      = [0 0 0];
            obj.params.numPoints     = 100;
            obj.params.realizations  = 20;
            obj.params.dimension     = numel(obj.params.startPoint);
        end
        
        %%% Set Input parameters
        %
        function SetInputParams(obj,argin)
            for fIdx = 1:2:numel(argin)
                if isfield(obj.params,argin{fIdx})
                    obj.params.(argin{fIdx}) = argin{fIdx+1};
                else
                    error('%s%s', argin{fIdx},' is not a valid parameter name');
                end
            end
             obj.params.dimension     = numel(obj.params.startPoint);
        end
        
    end
end
