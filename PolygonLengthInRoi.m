function [lengthIn, totalLength]= PolygonLengthInRoi(polyVert,xLb,yLb, width,height)
% calculate the length of a polygon falling within a 2D ROI defined by 
% [x,y,width, height], where x,y are the buttom left corners.
% %
% close all 
% if ~exist('debugPlot','var')
%     debugPlot = false;
% end

% start with the first vertex and iteratively check if two neighboring
% vertices are inside the roi. calculate the length of the line inside.

%     figure, plot(polyVert(:,1), polyVert(:,2),'o-');
%     hold on, rectangle('position',[xLb,yLb, width,height]);
%     set(gca,'XLim',[xLb-5 xLb+width+5],'YLim',[yLb-5,yLb+height+5])
% 

% calculate total length 
totalLength = 0;
lengthIn    = 0;

for dIdx = 1:size(polyVert,1)-1
    totalLength = totalLength + sqrt(sum((polyVert(dIdx,:)-polyVert(dIdx+1,:)).^2));
end

for vIdx = 1:size(polyVert,1)-1
    inBefore = InRoi(polyVert(vIdx,:),[xLb,yLb,width,height]);
    inAfter  = InRoi(polyVert(vIdx+1,:),[xLb,yLb,width,height]);
    
    dirVec  = polyVert(vIdx+1,:) -polyVert(vIdx,:);
    if inBefore && inAfter
         lengthIn = lengthIn + sqrt(sum(dirVec.^2));
         
%          line('XData',[polyVert(vIdx,1) polyVert(vIdx+1,1)],'YData',[polyVert(vIdx,2), polyVert(vIdx+1,2)],'Color','g')
    else 
        % Find intersection point between the points and all 4 sides         
         t     = zeros(1,4);
         
         t(1)  = (xLb-polyVert(vIdx,1))/(polyVert(vIdx+1,1)-polyVert(vIdx,1)); % left intersection
         p(1)  = (polyVert(vIdx,2)+t(1)*(polyVert(vIdx+1,2)-polyVert(vIdx,2)) - yLb)/height; % check the y for left
         
         t(2)  = (xLb+width-polyVert(vIdx,1))/(polyVert(vIdx+1,1)-polyVert(vIdx,1)); % right intersection
         p(2)  = (polyVert(vIdx,2)+t(2)*(polyVert(vIdx+1,2)-polyVert(vIdx,2)) - yLb)/height; % check the y for right
         
         t(3)  = (yLb+height-polyVert(vIdx,2))/(polyVert(vIdx+1,2)-polyVert(vIdx,2)); % Top intersection
         p(3)  = (polyVert(vIdx,1)+t(3)*(polyVert(vIdx+1,1)-polyVert(vIdx,1)) - (xLb))/width; % check the x for top
         
         t(4)  = (yLb-polyVert(vIdx,2))/(polyVert(vIdx+1,2)-polyVert(vIdx,2)); % buttom line intersection 
         p(4)  = (polyVert(vIdx,1)+t(4)*(polyVert(vIdx+1,1)-polyVert(vIdx,1)) - (xLb))/width; % check the x for buttom
         
         tInds = find(p>0 & p<1 & t> 0 & t<1);
         % for all t falling in the range (0,1) calculate the length of the line 
         if any(tInds)
             if inBefore && ~inAfter
                 % only one side is intersected in the range (0 1)
                 lengthIn = lengthIn + sqrt(sum((t(tInds)*dirVec).^2));
                 
%                  line('XData',[polyVert(vIdx,1) , polyVert(vIdx,1)+t(tInds)*dirVec(1)],...
%                       'YData',[polyVert(vIdx,2) , polyVert(vIdx,2)+t(tInds)*dirVec(2)],'Color','g');
             elseif ~inBefore && inAfter                 
                 % only one side intersected
                 lengthIn = lengthIn + sqrt(sum(((1-t(tInds))*dirVec).^2));
                 
%                  line('XData',[polyVert(vIdx,1)+t(tInds)*(polyVert(vIdx+1,1)-polyVert(vIdx,1)) , polyVert(vIdx+1,1)],...
%                       'YData',[polyVert(vIdx,2)+t(tInds)*(polyVert(vIdx+1,2)-polyVert(vIdx,2)) , polyVert(vIdx+1,2)],'Color','g');
             elseif ~inBefore && ~inAfter
                 % there are two intersections 
                 mt       = min(t(tInds));
                 mT       = max(t(tInds));
                 lengthIn = lengthIn+ sqrt(sum((polyVert(vIdx,:)+mT*(polyVert(vIdx+1,:)-polyVert(vIdx,:))-(polyVert(vIdx,:)+mt*(polyVert(vIdx+1,:)-polyVert(vIdx,:)))).^2));
                 
%                  line('XData',[polyVert(vIdx,1)+mt*(polyVert(vIdx+1,1)-polyVert(vIdx,1)),polyVert(vIdx,1)+mT*(polyVert(vIdx+1,1)-polyVert(vIdx,1))],...
%                       'YData',[polyVert(vIdx,2)+mt*(polyVert(vIdx+1,2)-polyVert(vIdx,2)),polyVert(vIdx,2)+mT*(polyVert(vIdx+1,2)-polyVert(vIdx,2))],'Color','g');
             end
         end         
    end  
    %title(sprintf('%s%s%s%s','Total length: ', num2str(totalLength),', Length In: ', num2str(lengthIn)))
 end
end

function in = InRoi(vert, rect)
    % inclusion in a rectangular ROi, rect (x,y,width, height)
    xIn = (vert(:,1)>rect(1) & vert(:,1)<(rect(1)+rect(3)));
    yIn = (vert(:,2)>rect(2) & vert(:,2)<(rect(2)+rect(4)));
    in  = (xIn & yIn);        
end