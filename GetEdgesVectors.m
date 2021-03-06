function edgesVec   = GetEdgesVectors(particlePosition, connectivityMap)
    % Calculate the edges vectors between connected particles
    % particlePosition is an NxDim vector of position
    % connectivityMat is an NxN logical matrix of particle connectivity
    edgesVec = zeros(size(particlePosition,1),size(particlePosition,1), size(particlePosition,2));
    for dIdx=1:size(particlePosition,2)
        a = bsxfun(@times,particlePosition(:,dIdx),connectivityMap);
        edgesVec(:,:,dIdx) = a-a';
%             bsxfun(@times,particlePosition(:,dIdx)',connectivityMap);
    end
end