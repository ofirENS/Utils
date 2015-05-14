function [force] = MorseForce(De,alpha, re, edgesX,edgesY,edgesZ, particleDistance,forceType)
% calculate the Morse force, derived from the Morse potential
% u = De*(exp(-2*a(r-re)) -2*exp(-a*(r-re)))
% The force is given by 
% F = dv/dr = De*(-2*a*exp(-2*a*(r-re)) +2*a*exp(-a*(r-re)))
% Input parameters:
% re - the equilibrium bond distance 
% De - the well depth
% alpha - the width of the potential
% edgesX, edgesY, edgesZ -  are numPartXnumPart matrices representing the vectors
% between particles in the X YT and Z respectively.
% particleDistance -  a numPartXnumPart matrix of pairwise distances 
% forceType is a string [attractive |repuslsive |full] indicating whether
% to use the attractive repulsive part of the Morse force or both
% For forces in 1 or 2D set the position of the particle in 2-3 dimension
% to be constant (preferably 0) prior to using this function 

% edgesVector(:,:,1)  = edgesX;
% edgesVector(:,:,2)  = edgesY;
% edgesVector(:,:,3)  = edgesZ;

dim = 3; 
% dim                 = size(edgesVector,3);
numParticles        = size(particleDistance,1);

% Calculate the force magnitude
repulse      = exp(-alpha*(particleDistance-re)); % repulsive term
attract      = 1-repulse; % attractive term 
if strcmpi(forceType,'attractive')
    forceMag = 2*alpha*De*attract;
elseif strcmpi(forceType,'repulsive')
    forceMag = 2*alpha*De*repulse;
elseif strcmpi(forceType,'full');
    forceMag = 2*De*alpha*attract*repulse;
else
    error('forceType not supported')
end


% remove the diagonal 
% Normalize the mean direction vectors to unit vectors
dirNorm = sqrt(edgesX.^2+edgesY.^2+edgesZ.^2);
dirNorm = dirNorm+eye(numParticles);% put ones in the diagonal to prevent dividing by zeros
dirVecX = edgesX./dirNorm;
dirVecY = edgesY./dirNorm;
dirVecZ = edgesZ./dirNorm;

% dirVec  = bsxfun(@rdivide, edgesVector,dirNorm);

% Multiply by the force magnitude
forceVecX  = forceMag.*dirVecX;
forceVecY  = forceMag.*dirVecY;
forceVecZ  = forceMag.*dirVecZ;

% bsxfun(@times,forceMag,dirVec);

% Calculate the mean force direction and assign it to each particle
force      = zeros(numParticles,dim);
force(:,1) = -sum(forceVecX,2);
force(:,2) = -sum(forceVecY,2);
force(:,3) = -sum(forceVecZ,2);


% for dIdx = 1:dim
%  force(:,dIdx) = -sum(forceVec(:,:,dIdx),2);
% end
