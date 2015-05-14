function number= RandomWrappedNormalOnCircle(mu,sigma,vecSize,thetaRange)
% draw randomly distributed random numbers on the unit sphere
if ~exist('vecSize','var')
    vecSize = [1,1];
end

if exist('range','var')
    theta= thetaRange;
else
    theta= 0:.01:2*pi;
end
% we assume the angles theta and phi are indipendent 
% each angle is drawn from the unit circle 

% approximate the pdf of the wrapped normal 
% numTerms = 50; % number of terms to calculate in the infinite series
format long
% the truncated pdf
% g     = @(theta,mu,sigma,N) (1/(2*pi)).*(1+2.*sum(((exp(-sigma^2)).^((1:N).^2)).*cos((1:N).*(theta-mu))));
% t     = -pi:.1:pi;
numT  = numel(theta);
% wnPDF = zeros(numT,1); 
% N=numTerms;
% wnPDF = (1/(2*pi*besseli(0,sigma))).*exp(sigma.*cos(t-mu));
% for tIdx = 1:numT    
%     % wraped normal pdf    
%     wnPDF(tIdx) = (1/(2*pi)).*(1+2.*sum(((exp(-sigma^2)).^((1:numTerms).^2)).*cos((1:numTerms).*(t(tIdx)-mu))));% g(t(tIdx),mu,sigma,numTerms);%
% end

% wnPDF = wnPDF./sum(wnPDF);
% wrapped normal CDF
% wnCDF = cumsum(wnPDF);
% wnCDF = zeros(numT,1);
k     = 1/sigma;
p     = 1:numT;
I0k   = besseli(0,k);
% Ipk   = besseli(p,k);
f = (1/(2*pi*I0k)).*exp(-k*cos(theta-mu));
wnCDF = cumsum(f);
wnCDF = wnCDF./max(wnCDF);
% for pIdx = 1:numT        
%     s           = sin(p.*(theta(pIdx)-mu))./p;
%     wnCDF(pIdx) = (1/(2*pi*I0k))*(theta(pIdx)*I0k +2*sum(Ipk.*s));
% end
% wnCDF = wnCDF+0.5;
% f=@(tau,theta,N) (N./tau).*sqrt(theta./sin(theta)).*exp(-(theta.^2)./(2*tau))
% wnCDF = sort(wnCDF);
% subtract the lower limit 
% wnCDF = wnCDF-wnCDF(1);
% wnCDF = wnCDF./sum(wnCDF);
% sample from the CDF 
% number = zeros(vecSize);
% for vIdx = 1:vecSize(2)
rp    = rand(vecSize);% should be contained within the range of wnCDF
m(1)  = min(wnCDF); m(2) = max(wnCDF);
rp    = (m(2)-m(1)).*rp +m(1);
% interpolate to get the number from the CDF
% p      = [0,(1/(numT)):(1/(numT-1)):1-1/(numT),1];
% collect monotonically increassing values in wnCDF 
cNum(1) = wnCDF(1);
next = 1;
pos = 1;
for wIdx = 2:numel(wnCDF)    
    if wnCDF(wIdx)>cNum
%         cNum(next+1) = wnCDF(wIdx);
        cNum = wnCDF(wIdx);
        pos(next+1) = wIdx;
        next = next+1;
    end
end

number = interp1(wnCDF(pos),theta(pos),rp,'linear');
number = number -mu;
% shift the angles to lay around the mean 

% end
% number = interp1(wnCDF,t,intVal,'linear');
% number = interp1(t,t,intVal,'linear');
% if any(isnan(number))
%     error('interpolation error')
% end

% figure, plot(t,wnPDF,'.g');% ,t,wnCDF,'r')
% 

