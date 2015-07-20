function [force, forceDirection] = LennardJones(particlePosition,particleDist,LJPotentialWidth,LJPotentialDepth,potentialType)
   % Calculate the lennard jones potential between beads and its derivative
   % particlePosition is a 3 by n matrix of particle position in space 
   % particle dist is an n by n pairwise distance matrix 
   % LJpotentialwidth is a scalar width of the LJ
   % LJPotentialepth is a scalar depth of the LJ
   % potentialType is a string stating the type of potential 'attractive' |
   % 'repulsive', or 'full'
   
%    if ~exist('PotentialType','var')
%        potentialType = 'full';
%    end
    numParticles = size(particlePosition,1);
    dimension    = size(particlePosition,2);
    force        = zeros(numParticles,dimension);
    beadsDistMat = particleDist;
    rm           = LJPotentialWidth; % the distance in which the potential is minimal
    epsilon      = LJPotentialDepth;
    bdmInv       = (beadsDistMat).^(-1);   % one over the bead distance matrix
    % remove the diagonal 
    bdmInv = bdmInv-diag(diag(bdmInv));
    
    % d            = MatIntPower(bdmInv, 6); % matrix integer power (mex form Utils)
    % Raise bdInv to the sixt power
    nb = dec2bin(6)-'0';
    ak = bdmInv;
    if nb(numel(nb))
        t = bdmInv;
    else
        t = ones(size(ak));
    end
    
    inds = nb(end-1:-1:1);
    for nbk = 1:numel(inds)
        ak = ak.*ak;
        if inds(nbk)
            t = t.*ak;
        end
    end
     
    A            = (rm^6).*t;
%     forceValue   = 24*(epsilon*bdmInv).*(-2*t.*t +t); % derivative of LJ function
    
    forceValue   = (2*epsilon*rm^6).*(A-1);
    
    if strcmpi(potentialType,'repulsive')
        forceValue(particleDist<2.5*rm)=0;% truncate
    elseif strcmpi(potentialType','attractive')
        forceValue(particleDist>2.5*rm)=0;% truncate
    end
    
    forceValue(isnan(forceValue))= 0;
    forceDirection = zeros(numParticles,numParticles,dimension);
    % sum the contribution from all particles
    for dIdx = 1:dimension
        % replicate the position vector
        A    = particlePosition(:,dIdx);
        siz  = [1,numParticles];
        B1   = A(:,ones(siz(2),1));
        siz  = [numParticles,1];
        A    = A';
        B2   = A(ones(siz(1),1),:);
        % Subtract positions to get the direction vectors
        forceDirection(:,:,dIdx)  = B1-B2;
        force(:,dIdx) = (sum(forceDirection(:,:,dIdx).*forceValue,1)');
    end
end