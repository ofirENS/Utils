function distMat = CalcDist(vec1,vec2,T)
% calculate the Euclidean distance between pair of observations which are
% related by the connection matrix T, specifiying in the cell (i,j) 1, if
% observation 1 and j are connected 
 dim1 = size(vec1,2);
 dim2 = size(vec2,2);
 if dim1~=dim2
     error('vector must have the same dimension')
 end
d = zeros(size(vec1,1), size(vec2,1),dim1);
for dIdx = 1:dim1
    A = repmat(vec1(:,dIdx),1,size(vec2,1));
    B = repmat(vec2(:,dIdx)', size(vec1,1),1);
    d(:,:,dIdx) = (A-B).^2;
end
distMat = T.*sqrt(sum(d,3));
end