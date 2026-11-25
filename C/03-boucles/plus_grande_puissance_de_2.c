#include <stdio.h>

#define C 2426555645

unsigned long largest_power_of_2_less_than(unsigned long c) {
    unsigned long power = 1;
    while (power * 2 < c) {
        power *= 2;
    }
    return power;
}

int main() {
    unsigned long result = largest_power_of_2_less_than(C);
    printf("La plus grande puissance de 2 inférieure à %lu est %lu.\n", C, result);
    return 0;
}
