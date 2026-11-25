function c=matproduct(a,b)
c=zeros(p,q);
for i=1:p
     for j=1;q
         for k=1:n1
             c(i,j)=c(i,j)+a(i,k)*b(k,j);
         end 
     end 
end
