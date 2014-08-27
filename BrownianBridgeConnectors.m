function BrownianBridgeConnectors(connectedBeads,numBeads,beadDistSTD)
% connect the beas in connected beads by Brownian bridges. 
% connected beads is a numBeadsX2
% array of pair-wise connected bead. 
% beadDistSTD is the std 

if ~exist('beadDistSTD','var')
    beadDistSTD=1;
end

% start by creating a random polymer 
% the polymer always starts at the origin 
w = [0 0 0; beadDistSTD*randn(numBeads-1,3)];
wb = w;% the looped brownian bridge 

% sort the loop sized 
loopSize = connectedBeads(:,1)-connectedBeads(:,1);
[~,loopsInds] = sort(loopSize,'Descend');
for lIdx = 1:numel(loopsInds)
     % always start from the smaller index
        startIndTemp = connectedBeads(loopsInds(lIdx),1);
        endIndTemp   = connectedBeads(loopsInds(lIdx),2);
        startInd     = min([startIndTemp,endIndTemp]);
        endInd       = max([startIndTemp,endIndTemp]);
        z            =  randn(1,3);
        wb           = wb-repmat(wb(startInd,:),numBeads,1);
        wbTemp       = wb;        
        
    for bIdx = 1:numBeads               
        wbTemp(bIdx,:) = wb(startInd,:)+wb(bIdx,:)-((bIdx-startInd)/(endInd-startInd))*(wb(endInd,:)-(wb(startInd,:)+z*beadDistSTD)+wb(startInd,:));
    end
    wb = wbTemp;
end

% shift the polymer back such that the first point is at the origin 
 wb = wb-repmat(wb(1,:), numBeads,1);

% plot the polymer 
 f =figure('MenuBar','none');
 a= axes('Parent',f,'NextPlot','Add');
 
 plot3(a,wb(:,1),wb(:,2),wb(:,3),'og-')
 plot3(a,w(:,1),w(:,2),w(:,3),'ob-')
 % plot all connectors 
 for cIdx = 1:size(connectedBeads,1)
     line('XData',[wb(connectedBeads(cIdx,1),1), wb(connectedBeads(cIdx,2),1)],...
         'YData',[wb(connectedBeads(cIdx,1),2), wb(connectedBeads(cIdx,2),2)],...
         'ZData',[wb(connectedBeads(cIdx,1),3), wb(connectedBeads(cIdx,2),3)],...
         'Marker','o',...
         'Color','r');
 end
 daspect(a,[1 1 1])
cameratoolbar