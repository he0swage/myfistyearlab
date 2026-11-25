#include<stdio.h>
#include<stdlib.h>
int main()
{//demander les notes
    float N1, N2, N3, N4, N5;
    float moyenne;
    printf("entrer les notes de l'eleve: ");
    scanf("%f%f%f%f%f",&N1, &N2, &N3, &N4, &N5);
    //calculer la moyenne
    moyenne=(N1+N2+N3+N4+N5)/5;
    //ecrire la moyenne
    printf("La moyenne est : %f\n", moyenne);
    return 0 ;
}
