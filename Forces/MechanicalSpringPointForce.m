function force = MechanicalSpringPointForce(particlePosition,pointSourcePosition, forceDirection, forceMagnitude,cutoff)

% Apply an harmonic pushing force for particles around force sources. 

% Calculate the distance betwen each particle and the point source position
force = zeros(size(particlePosition,1),3);
for sIdx = 1:size(pointSourcePosition,1)    
      forceDir     = 2*bsxfun(@minus,particlePosition,pointSourcePosition(sIdx,:));
      distToSource = cutoff^2- sum(forceDir.^2,2);
      distToSource(distToSource<0) = 0;
      force  = force + bsxfun(@times,distToSource,forceDir);
end
if forceDirection==-1
    force = -forceMagnitude*force;
elseif forceDirection==1
    force = forceMagnitude*force;
else 
    error('unsupported direction option')
end