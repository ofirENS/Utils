function force = LennardJones(particlePosition,particleDist,LJPotentialWidth,LJPotentialDepth)
    numParticles = size(particlePosition,1);
    dimension    = size(particlePosition,2);
    force        = zeros(numParticles,dimension);
    beadsDistMat = particleDist;
    sig          = LJPotentialWidth;
    epsilon      = LJPotentialDepth;
    bdmInv       = (beadsDistMat).^(-1);   % one over the bead distance matrix

    %                 d            = MatIntPower(bdmInv, 6); % matrix integer power (mex form Utils)

    nb = dec2bin(6)-'0';
    ak = bdmInv;
    if nb(numel(nb))
        d = bdmInv;
    else
        d = ones(size(ak));
    end
    
    inds = nb(end-1:-1:1);
    for nbk = 1:numel(inds)
        ak = ak.*ak;
        if inds(nbk)
            d = d.*ak;
        end
    end

    t            = (sig^6).*d;
    forceValue   = 24*(epsilon*bdmInv).*(-2*t.*t +t); % derivative of LJ function

    forceValue(isnan(forceValue))= 0;
    for dIdx = 1:dimension
        % replicate the position vector
        A    = particlePosition(:,dIdx);
        siz  = [1,numParticles];
        B1   = A(:,ones(siz(2),1));
        siz  = [numParticles,1];
        A    = A';
        B2   = A(ones(siz(1),1),:);
        % Subtract positions to get the direction vectors
        fd  = B1-B2;
        force(:,dIdx) = (sum(fd.*forceValue,1)');
    end
end