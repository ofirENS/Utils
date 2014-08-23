function [wb] = BrowinianBridge(startPt,endPt,numPts)
% create a brownian bridge starting at startPt and ending in endPt with
% numPts time points in between
dim = size(startPt,2);
w   = [zeros(1,dim);randn(numPts-1,dim)];
wb  = [w(1,:);zeros(numPts-1,dim)];

for pIdx=2:numPts
wb(pIdx,:)  = startPt+w(pIdx,:)-(pIdx/(numPts))*(w(end,:)-endPt+startPt);
dwb(pIdx-1) = norm(wb(pIdx,:)-wb(pIdx-1,:));
dw(pIdx-1)  = norm(w(pIdx,:)-w(pIdx-1,:));
end

% plot
if dim==3
    figure, plot3(w(:,1),w(:,2),w(:,3),'bo-',wb(:,1),wb(:,2),wb(:,3),'ro-')
    hold on 
    plot3(wb(1,1),wb(1,2),wb(1,3),'oc')
    plot3(wb(numPts,1),wb(numPts,2),wb(numPts,3),'oc')
elseif dim==2
    figure, plot(w(:,1),w(:,2),'bo-',wb(:,1),wb(:,2),'ro-')
end
% calculate msd
mean(dwb)
mean(dw)