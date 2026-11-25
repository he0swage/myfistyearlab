a = input('Enter matrix a:\n');
b = input('Enter matrix b:\n');

[p, n1] = size(a);
[n2, q] = size(b);

if n1 ~= n2
    error('Error: matrix size are not compatible');
else
    c=matproduct(a,b)                                    
   disp('Result of matrix multiplication:');
    disp(c);
end
