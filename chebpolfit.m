function [c,x] = chebpolfit(fname,n)
% fit a function fname with a Chebyshev polynomial of degree n
x = cos((2*(1:n)'-1)*pi/2/n);
y = feval(fname,x);
T = [zeros(n,1) ones(n,1)];
c = [sum(y)/n zeros(1,n-1)];
a = 1;
for k = 2:n
 T = [T(:,2) a*x.*T(:,2)-T(:,1)];
 c(k) = sum( T(:,2) .* y)*2/n;
 a = 2;
end