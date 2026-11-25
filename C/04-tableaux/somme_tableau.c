#include<stdio.h>
#include<stdlib.h>
int main ()
{int n,i,sum;
sum=0;
printf("enter the size of the array: ");
scanf("%d",&n);
int tab[n];
for (i=0;i<n;i++)
{
   printf("enter the elements of the array: ");
scanf("%d",&tab[i]);
 
}

for(i=0;i<n;i++)
{
sum=sum+tab[i];
}
printf("the sum is : %d\n",sum);
    system("PAUSE");
}
