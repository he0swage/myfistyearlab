#include <stdio.h>
#include <math.h>

int main()
{
   float r,aera,surface;
   printf("entrer la valeur de r : ");

   scanf("%f",&r);

   aera=(r*r*M_PI);

   printf("aera  du cercle est:%f",aera);

   surface=(2*M_PI*r);

   printf("la surface du cercle est:%f",surface);


    return 0;
}
