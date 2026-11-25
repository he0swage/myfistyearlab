#include <stdio.h>
#include <stdlib.h>

int main()
{
int I,N,element;
printf("enter the size of the array:\n ");
scanf("%d",&N);
int TAB[N];
for (I=0;I<N;I++)
{
    printf("enter a element of the array:\n ");
    scanf("%d",&TAB[I]);
}
for (I=0;I<N;I++)
{
    if (element==TAB[I])
printf("this element exist!!:\n");
   else
    printf("this element don't exist!!!:\n ");
}

    return 0;
}
