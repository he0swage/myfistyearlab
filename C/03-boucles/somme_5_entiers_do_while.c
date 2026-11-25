#include <stdio.h>
#include <stdlib.h>

int main()
{int i,a,b;
b=0;

   do{
            printf("give an integer:");

            scanf("%d",&a);

            b+=a;

        i++;}while(i<5);

printf("the result is: %d\a",b);

    return 0;
}


