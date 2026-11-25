#include<stdio.h>
 int main ()
  {
         int n;
    int tab[n];
    int i;
    printf("entrer la taille du tableau: ");
    for (i=0;i<n;i++)
    tab[i]=i+1;
    for(i=0;i<n;i++)
        printf("la valeur de tab[%d] est: %d\n",i,tab[i]);
    return 0;
  }
