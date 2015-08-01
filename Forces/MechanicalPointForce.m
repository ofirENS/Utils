function force = MechanicalPointForce(particlePosition,pointSourcePosition, forceDirection, forceMagnitude,cutoff)
% apply mechanical (push or pull) force on particles
% mechanicalForce is a logical flag 
% particlPosition is a N by 3 vector of particle position
% pointSourcePosition is the position of force sources 
% forceDirection is either  -1 for 'in' or 1 for 'out'
% forceMagnitude is a positive number between 0 and 1
% cutoff is the maximal direction the force operates on particle relative
% to the pointSourcePosition 
% the output is a vector of N by 3 of delta position to th

forceTemp = zeros(size(particlePosition));
force     = zeros(size(particlePosition));
forceMag  = zeros(size(particlePosition,1));

    for sIdx = 1:size(pointSourcePosition,1)
        forceDir = bsxfun(@minus,particlePosition,pointSourcePosition(sIdx,:));
        if strcmpi(forceDirection,'in')
            forceDir = -forceDir;
        end
        
        % Find the distance between the particles and the source
        distToSource = sqrt(sum(forceDir.^2,2));
        
        % Normalize the forceDirection
        for dIdx = 1:3
          forceDir(:,dIdx) = forceDir(:,dIdx)./distToSource;% bsxfun(@rdivide,forceDir,distToSource);
        end
        
        % Multiply the
        
        if forceDirection==-1
            forceMag = (1-forceMagnitude./(1+distToSource));
        elseif forceDirection==1
            forceMag = (forceMagnitude./(1+distToSource));
        end
        for dIdx = 1:3
            forceTemp(:,dIdx) = forceDir(:,dIdx).*forceMag;% bsxfun(@times,forceDir,forceTemp);
        end
        
        forceTemp(distToSource>cutoff,:) = 0;
        forceTemp(isnan(forceTemp))      = 0;
        force                            = force+forceTemp;
    end
end
