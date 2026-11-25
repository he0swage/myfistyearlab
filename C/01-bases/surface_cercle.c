#include <stdio.h>
#include <math.h>

int main()
{
    float r,surface;

    printf("veuiller entrer la longeure du rayon du cercle C : ");

    scanf("%f",&r);

   surface=(M_PI*r*r);

    printf("la surface du cercle C est : %f",surface);

    return 0;
}
