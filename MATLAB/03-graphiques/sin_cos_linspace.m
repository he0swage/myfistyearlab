x=linspace(0,4*pi,150);
f=sin(pi/4*x);
g=cos(pi/4*x);
figure;
plot(x,f,'r-',x,g,'g--')
title('plot of f(x)and g(x)');
legend('f(x)=sin(pi/4*x','g(x)=cos(pi/4*x)');