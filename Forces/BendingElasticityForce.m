function force  = BendingElasticityForce(edgeMatX,edgeMatY,edgeMatZ,connectivityMat,bendingConst)
%===========
% Calculate the force on each particle given its connectivity
numParticles = size(connectivityMat,1);
dimension    = 3;
force        = zeros(numParticles,dimension);

for pIdx = 1:numParticles
    edgeVec =  [edgeMatX(pIdx,connectivityMat(pIdx,:)); edgeMatY(pIdx,connectivityMat(pIdx,:));...
                    edgeMatZ(pIdx,connectivityMat(pIdx,:))];
    % calculate the pairwise angles between the connected
    % particles
    n     = size(edgeVec,2);% number of edge pairs
    if n>=2
        next  = 1;        
        numPairs = factorial(n)/(factorial(2)*factorial(n-2));
        forceVec = zeros(numPairs,dimension);
        angle    = zeros(1,numPairs);
        for a1Idx = 1:n
            for a2Idx = a1Idx+1:n
                vec1             = edgeVec(:,a1Idx);                
                vec2             = edgeVec(:,a2Idx);                
                angle(next)      = acos(sum(vec1.*vec2)./(norm(vec1)*norm(vec2)));
                dirVec           =  (vec2+vec1)/2;
                forceVec(next,:) = bendingConst*(angle(next)/pi - 1) * dirVec;
                next             = next+1;
            end
        end
        % calculate the resulting force vector for the specific
        % particle
        force(pIdx,:) = mean(forceVec,1);
    end
end
end
