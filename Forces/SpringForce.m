function force = SpringForce(particleDist,springConst,connectivityMap,minParticleDist);%,fixedParticleNum)
% Calculate the spring force between N particles in any dimension M.
% particleDist    - NxN matrix of pairwise particle distances
% springConst     - NxN double matrix of spring constants
% connectivityMap - NxN binary matrix which defines the connectivity between particles
% minParticleDist - minimal distance between particles
% fixedParticleNum - particles in the system which do not move

connectivityMap = double(connectivityMap);
% force              = springConst.*particleDist.*connectivityMap;
particleDist    = particleDist+diag(Inf*ones(1,size(particleDist,1)));
ons             = zeros(size(particleDist));
sc         = springConst*ones(size(particleDist));
L                         = (ons-minParticleDist./particleDist).*connectivityMap;
sumForces                 = sum(L,2);
force                     = sc.*(diag(sumForces)-L); % set the maindiagonal
% force(fixedParticleNum,:) = 0;% zero out forces for fixed particles
% force(:,fixedParticleNum) = 0;% zero out forces for fixed particles

