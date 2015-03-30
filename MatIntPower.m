function d = MatIntPower(a, n)
% d = MatIntPower(a, n)
% power with integer exponent
% return the array d = a.^n

% binary decomposition
nb = dec2bin(n)-'0';
ak = a;
if nb(end)
    d = a;
else
    d = 1;
end
for nbk = nb(end-1:-1:1)
    ak = ak.*ak;
    if nbk
        d = d.*ak;
    end
end

end % MatIntPower