classdef SurfaceMax<handle%Unfinished
    % find the maxima of 2D surface S
    properties
        surface
        levelMax
        convolutionPyramid
    end
    
    properties(Access = private)
        surfSize
        levels = 10;
        stdRange 
        structureElement
        gaussianMaskSize        
    end
    
    methods
        function obj = SurfaceMax(S)
            % S must be 2D 
            obj.surface  = double(S);
            [obj.surfSize.rows,obj.surfSize.cols] = size(S);
            obj.gaussianMaskSize.rows = floor(0.2*obj.surfSize.rows);
            obj.gaussianMaskSize.cols = floor(0.2*obj.surfSize.cols);
            obj.stdRange = linspace(1.1,10,obj.levels);%floor(0.2*(obj.surfSize.rows*obj.surfSize.cols)),obj.levels);
            obj.structureElement = strel('ball',10,1,10);
            obj.FindMaxima
        end
        
        function FindMaxima(obj)
            obj.CalculateConvolutionPyramid
            
        end
        
        function CalculateConvolutionPyramid(obj)
            obj.convolutionPyramid = zeros(obj.surfSize.rows,obj.surfSize.cols,obj.levels);
            for lIdx = 1:obj.levels
                fs = fspecial('Gaussian',[obj.gaussianMaskSize.rows, obj.gaussianMaskSize.cols],obj.stdRange(lIdx));
                obj.convolutionPyramid(:,:,lIdx) = conv2(obj.surface,fs,'same');
                obj.levelMax(:,:,lIdx) = imdilate(obj.convolutionPyramid(:,:,lIdx),obj.structureElement);
            end            
        end
    end
end