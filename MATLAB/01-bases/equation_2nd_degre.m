a=input('enter the number a :\n');
b=input('enter the number b :\n');
c=input('enter the number c :\n');
delta=b^2-4*a*c;
disp(delta);

 if delta>0
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        
        disp(x1);
        disp(x2);
 elseif delta==0 
        x=-b/2*a;
        disp(x);
     else 
       x1 = (-b + 1i*sqrt(-delta)) / (2*a);
    x2 = (-b - 1i*sqrt(-delta)) / (2*a);
        disp(x1);
        disp(x2);
end
