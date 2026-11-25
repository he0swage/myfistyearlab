#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,nbl;

     printf("number of lines: ");

     scanf("%d",&nbl);

    for(i=1;i<=nbl;i++)

    {

         for(j=1;j<=i;j++)

    {
        printf("*");

    }
printf("\n");
    }

    return 0;
}
