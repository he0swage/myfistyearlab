x=0:0.1:2*pi;
y=sin(x);
plot(x,y,'r--o');
xlabel('time(s)');
ylabel(Amplitude');
title('sine wave');
grid on;
text(pi/2,1,'peak');
axis([0 2*pi,-1,5 1,5]);
