#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf("enter a numbers between 0 and 10: ");
    scanf("%f",&a);
    if(1<a<2)
        printf("you won 1 point! ");
    else
        if(3<a<6)
        printf("you won 30 point!!! ");
    else
        printf("you won 3 point!");

    return 0;
}
