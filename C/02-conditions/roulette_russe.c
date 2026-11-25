#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chambre, balle;

    // Initialiser le générateur de nombres aléatoires
    srand(time(NULL));

    // Générer un emplacement pour la balle (entre 1 et 6)
    balle = rand() % 6 + 1;

    // Demander au joueur de tirer (choisir une chambre)
    printf("Bienvenue dans la simulation de la roulette russe.\n");
    printf("Appuyez sur Entrée pour tirer...\n");
    getchar();  // Attendre que l'utilisateur appuie sur Entrée

    // Générer un tir au hasard (entre 1 et 6)
    chambre = rand() % 6 + 1;

    // Vérifier si le joueur survit
    if(chambre == balle) {
        printf("Bang! Tu es mort.\n");
    } else {
        printf("Clique! Tu as survécu... pour cette fois.\n");
    }

    return 0;
}
