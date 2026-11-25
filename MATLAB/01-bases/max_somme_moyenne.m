clear;
clc;
% %input=scanf()
% a=input('enter the number');
% b=input('enter the seconde number');
% c=input('enter the third number');
% %calcul
% max =max([a,b,c]);
% sum=a+b+c;
% average=sum/3;
% %affichage printf()=fprintf()
% fprintf('the largest number is :%d\n',max);
% fprintf('the sum of the number is :%d\n',sum);
% fprintf('the average of number is :%d\n',average);\

% x=input('enter the number x:\n');
% y=input('enter the numver y :\n');
% fprintf('before swapping:\n x=%d\n and y=%d\n',x,y);
% z=x;
% x=y;
% y=z;
% fprintf('the result after swapping is :\n x=%d\n y=%d',x,y);
a = input('Enter matrix a:\n');
b = input('Enter matrix b:\n');

[p, n1] = size(a);
[n2, q] = size(b);

if n1 ~= n2
    error('Error: matrix size are not compatible');
else
    c = zeros(p, q); % Initialisation de la matrice cca
    for i = 1:p
    for j = 1:q
    for z = 1:n1
    c(i,j) = c(i,j) + a(i,z) * b(z,j);
    end
    end
    end                                     
    disp('Result of matrix multiplication:');
    disp(c);
end
