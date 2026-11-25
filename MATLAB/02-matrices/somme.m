function s=somme(a,b)
% la somme de deux matrice 
if size (a)~=size(b)
    error ('error:matrice seize not compatible');
else 
    s=a+b;
    disp(s);
end
end 