function pass = test_constructor2( pref ) 
% This tests the chebfun2 constructor. 

if ( nargin < 1 ) 
    pref = chebfunpref; 
end 
tol = 1e2 * pref.eps; 


% Test building Chebfun2 objects from sample data: 
seedRNG(0);
r = rand(3);
pass(1) = norm( r - chebcoeffs2(chebfun2(r, 'coeffs')) ) < 10*tol; 
r = rand(4);
pass(2) = norm( r - chebcoeffs2(chebfun2(r, 'coeffs')) ) < 10*tol;
r = rand(4);
pass(3) = norm( r - chebpolyval2(chebfun2(r)) ) < 10*tol;

g = @(x,y) exp(-((x+pi).^2+y.^2)./max(1 - ((x+pi).^2 + y.^2),0));
f = chebfun2(g,[-pi,pi,-pi,pi]);
[xx,yy] = meshgrid(linspace(-pi,pi,1001));
err = g(xx,yy)-f(xx,yy);
pass(4) = ( norm(err(:),inf ) < 2e7*tol );

% Make a chebfun2 based on TRIGTECH by calling the periodic flag: 
f1 = chebfun2(@(x,y) cos(pi*x).*sin(pi*y),'periodic'); 
f2 = chebfun2(@(x,y) cos(pi*x).*sin(pi*y),[-1 1 -1 1],'periodic');
pass(5) = ( norm( f1 - f2 ) < tol );

f1 = chebfun2(@(x,y) cos(pi*cos(pi*x) + pi*sin(pi*y)),'periodic');
f2 = chebfun2(@(x,y) cos(pi*cos(pi*x) + pi*sin(pi*y)), [-1 1 -1 1], 'periodic');
pass(6) = ( norm(f1 -f2) < 10*tol );
% Check underlying tech is a TRIGTECH: 
techRow = get(f1.cols.funs{1}, 'tech');
techCol = get(f1.rows.funs{1}, 'tech');
pass(7) = ( isa(techRow(), 'trigtech') ); 
pass(8) = ( isa(techCol(), 'trigtech') ); 

end
