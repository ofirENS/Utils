function force = BendingElasticity(pos, dist,bendingConst,angle0, affectedParticles,numParticles,dimension)
%===========
% Calculate the force on each particle given its connectivity
% numParticles = size(pos,1);
% dimension    = size(pos,2);
force        = zeros(numParticles,dimension);
% if ~exist('affectedParticles','var')
%     affectedParticles = 1:size(pos,1);
% end
% 
% F1 = @(pos,dist,i,cosTheta0)((pos(i-2,:)-pos(i-1,:))*(pos(i,:)-pos(i-1,:))'./(dist(i-2,i-1)*dist(i-1,i)) -cosTheta0)*(pos(i-2,:)-pos(i-1,:))./(dist(i-2,i-1)*dist(i,i-1));
% F2 = @(pos,dist,i,cosTheta0)((pos(i-1,:)-pos(i,:))*(pos(i+1,:)-pos(i,:))'./(dist(i-1,i)*dist(i+1,i)) -cosTheta0)* (2*pos(i,:)-pos(i-1,:)-pos(i+1,:))./(dist(i-1,i)*dist(i+1,i));
% F3 = @(pos,dist,i,cosTheta0)((pos(i+2,:)-pos(i+1,:))*(pos(i,:)-pos(i+1,:))'./(dist(i+2,i+1)*dist(i+1,i)) -cosTheta0)* (pos(i+2,:)-pos(i+1,:))./(dist(i+2,i+1)*dist(i,i+1)); 
% 
% 
% pos = pos;
% dist = dist;

cosTheta0    = cos(angle0);
if numParticles>2
for pIdx = 1:numel(affectedParticles)
      i = affectedParticles(pIdx);        
    if (i==1)
         force(1,1:3) = ((((pos(i+2,:)-pos(i+1,:))*(pos(i,:)-pos(i+1,:))')/(dist(i+2,i+1)*dist(i+1,i)) -cosTheta0).* ((pos(i+2,:)-pos(i+1,:))./(dist(i+2,i+1)*dist(i,i+1))));
         
    elseif all([i== 2, i~=(numParticles-1)]);
        
         force(2,1:3) = ((((pos(i-1,:)-pos(i,:))*(pos(i+1,:)-pos(i,:))')/(dist(i-1,i)*dist(i+1,i)) -cosTheta0).* ((2*pos(i,:)-pos(i-1,:)-pos(i+1,:))./(dist(i-1,i)*dist(i+1,i)))+...
                                                           (((pos(i+2,:)-pos(i+1,:))*(pos(i,:)-pos(i+1,:))')/(dist(i+2,i+1)*dist(i+1,i)) -cosTheta0).* ((pos(i+2,:)-pos(i+1,:))./(dist(i+2,i+1)*dist(i,i+1)))); 
         
     elseif all([i == 2 ,(i==(numParticles-1))])
           force(2,1:3) = bendingConst.*((((pos(i-1,:)-pos(i,:))*(pos(i+1,:)-pos(i,:))')/(dist(i-1,i)*dist(i+1,i)) -cosTheta0).* ((2*pos(i,:)-pos(i-1,:)-pos(i+1,:))./(dist(i-1,i)*dist(i+1,i))));
           
    elseif all([i == (numParticles-1) , (i~=2)])
          force(i,1:3) = ((((pos(i-1,:)-pos(i,:))  *(pos(i+1,:)-pos(i,:))')/(dist(i-1,i)  *dist(i+1,i)) -cosTheta0).*((2*pos(i,:)-pos(i-1,:)-pos(i+1,:))./(dist(i-1,i)*dist(i+1,i)))+...
                                                            (((pos(i-2,:)-pos(i-1,:))*(pos(i,:)-pos(i-1,:))')/(dist(i-2,i-1)*dist(i-1,i)) -cosTheta0).*((pos(i-2,:)-pos(i-1,:))./(dist(i-2,i-1)*dist(i,i-1))));
    elseif i== numParticles        

         force(i,1:3) = (((((pos(i-2,:)-pos(i-1,:))*(pos(i,:)-pos(i-1,:))')/(dist(i-2,i-1)*dist(i-1,i))) -cosTheta0).*((pos(i-2,:)-pos(i-1,:))./(dist(i-2,i-1)*dist(i,i-1))));
    else
         r1 = (pos(i-2,:)-pos(i-1,:));
         r2 = (pos(i,:)-pos(i-1,:));
         F1 = (((r1*r2')/(dist(i-2,i-1)*dist(i-1,i)))-cosTheta0).*(r1./(dist(i-2,i-1)*dist(i,i-1)));
         F2 = ((((pos(i-1,:)-pos(i,:)) *(pos(i+1,:)-pos(i,:))')/(dist(i-1,i)*dist(i+1,i)))  -cosTheta0).*((2*pos(i,:)-pos(i-1,:)-pos(i+1,:))./(dist(i-1,i)*dist(i+1,i)));
         F3 = ((((pos(i+2,:)-pos(i+1,:))*(pos(i,:)-pos(i+1,:))')/(dist(i+2,i+1)*dist(i+1,i)))-cosTheta0).*((pos(i+2,:)-pos(i+1,:))./(dist(i+2,i+1)*dist(i,i+1)));
         
         
                  
        force(i,1:3)= (((((pos(i-2,:)-pos(i-1,:))*(pos(i,:)-pos(i-1,:))')/(dist(i-2,i-1)*dist(i-1,i)))-cosTheta0).*((pos(i-2,:)-pos(i-1,:))./(dist(i-2,i-1)*dist(i,i-1))) +...
                      ((((pos(i-1,:)-pos(i,:))  *(pos(i+1,:)-pos(i,:))')/(dist(i-1,i)*dist(i+1,i)))  -cosTheta0).*((2*pos(i,:)-pos(i-1,:)-pos(i+1,:))./(dist(i-1,i)*dist(i+1,i)))+...
                      ((((pos(i+2,:)-pos(i+1,:))*(pos(i,:)-pos(i+1,:))')/(dist(i+2,i+1)*dist(i+1,i)))-cosTheta0).*((pos(i+2,:)-pos(i+1,:))./(dist(i+2,i+1)*dist(i,i+1))));
    end
    
end

force= -bendingConst.*force;

end

end
