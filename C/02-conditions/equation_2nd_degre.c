#include <stdio.h>
#include <stdlib.h>

int main() {
    float A, B, C, equation;
    printf("Entrez les valeurs de A, B et C : ");
    scanf("%f %f %f", &A, &B, &C);

    if (A > 0) {

        equation = (B * B - 4 * A * C);
        printf("La solution de l'équation est : %f\n", equation);
    } else if (A < 0) {

        equation = (B * B - 4 * A );
        printf("La solution de l'équation (pour A < 0) est : %f\n", equation);
    }
    return 0;
}
