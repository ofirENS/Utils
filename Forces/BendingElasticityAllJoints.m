function force = BendingElasticityAllJoints(particles,alpha,fixedParticles)
% scr test bending elasticity with force at all joints

numPoints = size(particles,1);
dimension = size(particles,2);    
force     = zeros(numPoints,dimension); % the force vector on each particle
    for pIdx = 2:numPoints-1
        midPoint = 0.5.*(particles(pIdx-1,:)+ particles(pIdx+1,:));
        
        % Calculate the force vectors on each particle
        
        % mid particle:
        force(pIdx,:) = alpha.*(midPoint-particles(pIdx,:))+force(pIdx,:);
        
        % neighboring particles
        
        % vector connecting neighbors
        vR = (particles(pIdx+1,:) - particles(pIdx,:)); % from left to right
        vL =  particles(pIdx-1,:) - particles(pIdx,:);
                
        % the normalized force vector of the neighbors
        dirR = (particles(pIdx+1,:) - midPoint);
        dirR = dirR./norm(dirR);        
        
        a  = sqrt(sum((midPoint -particles(pIdx+1,:)).^2));
        
        b = norm(vR);                
        force(pIdx+1,:) = force(pIdx+1,:) + dirR*(b-a)*alpha ;
        
        b    = norm(vL);                
        force(pIdx-1,:) = force(pIdx-1,:) + dirR*(b-a)*alpha;
    end
    force(fixedParticles,:) = 0;% keep first particle fixed    

end