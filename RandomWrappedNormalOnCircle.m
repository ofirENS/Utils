function number= RandomWrappedNormalOnCircle(mu,sigma,numPoints)
% draw randomly distributed random numbers on the unit sphere
if ~exist('numPoints','var')
    numPoints = 1;
end

% we assume the angles theta and phi are indipendent 
% each angle is drawn from the unit circle 

% approximate the pdf of the wrapped normal 
numTerms = 50; % number of terms to calculate in the infinite series

% the truncated pdf
% g     = @(theta,mu,sigma,N) (1/(2*pi)).*(1+2.*sum(((exp(-sigma^2)).^((1:N).^2)).*cos((1:N).*(theta-mu))));
t     = -pi:.1:pi;
numT  = numel(t);
wnPDF = zeros(numT,1); 
% N=numTerms;
for tIdx = 1:numT    
    % wraped normal pdf
    wnPDF(tIdx) = (1/(2*pi)).*(1+2.*sum(((exp(-sigma^2)).^((1:numTerms).^2)).*cos((1:numTerms).*(t(tIdx)-mu))));% g(t(tIdx),mu,sigma,numTerms);%
end

wnPDF = wnPDF./sum(wnPDF);
% wrapped normal CDF
wnCDF = cumsum(wnPDF);
% sample from the CDF 
rp    = rand(numPoints,1);% should be contained within the range of wnCDF
m     = minmax(wnCDF');
rp    = (m(2)-m(1)).*rp +m(1);
% interpolate to get the number from the CDF
% p      = [0,(1/(numT)):(1/(numT-1)):1-1/(numT),1];
number = interp1(wnCDF,t,rp,'linear');
% number = interp1(wnCDF,t,intVal,'linear');
% number = interp1(t,t,intVal,'linear');
% if any(isnan(number))
%     error('interpolation error')
% end

% figure, plot(t,wnPDF,'.g');% ,t,wnCDF,'r')
% 

