function pass = test_null(pref)

if ( nargin == 0 )
    pref = cheboppref();
end

tol = pref.errTol;
disc = {'chebcolloc1', 'chebcolloc2', 'ultraS'};

pass = zeros(3, 7);
err = zeros(3, 7);

for k = 1:3
    
    pref = cheboppref;
    pref.discretization = disc{k};
    
    % Test 1:
    N = chebop(@(u) diff(u), [0, pi]);
    V = null(N, pref);
    err(k,1)  = norm(N(V), 2);           % Check residual.
    pass(k,1) = err(k,1) < tol;
    pass(k,2) = size(V, 2) == 1;
    err(k,3)  = abs(V'*V - 1);           % Check orthanormality.
    pass(k,3) = err(k,3) < tol;

    % Test 2:
    N = chebop(@(x, u) 0.2*diff(u, 3) - sin(3*x).*diff(u));
    N.rbc = 1;
    V = null(N, pref);
    err(k,4) = norm(N(V), 2);           % Check residual.
    pass(k,4) = err(k,4) < 1e5*tol;         
    pass(k,5) = size(V, 2) == 2;
    err(k,6) = norm(V'*V - eye(2), inf);  % Check orthanomrality.
    pass(k,6) = err(k,6) < tol;
    err(k,7) = norm(feval(V, 1), inf);    % Check BC is satisfied.
    pass(k,7) = err(k,7) < tol;

end

end


