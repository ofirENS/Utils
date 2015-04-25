function u = chebpolval(c,x)
% get the values of a chebyshev polynomail at points x
n = length(c); 
u = c(n)*ones(size(x));
if n > 1
 ujp1 = u;
 u = c(n-1) + 2*x*c(n);
 for j = n-2:-1:1
 ujp2 = ujp1;
 ujp1 = u;
 u = c(j) + 2*x.*ujp1 - ujp2;
 end
 u = u - x.*ujp1;
end