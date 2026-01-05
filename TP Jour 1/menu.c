#include <stdio.h>

int exo_menu(void) {
    int choix;

    printf("=== MENU ===\n");
    printf("1. Afficher \"Bonjour\"\n");
    printf("2. Afficher \"Au revoir\"\n");
    printf("3. Afficher \"Merci\"\n");
    printf("4. Quitter\n");
    printf("Entrez votre choix : ");

    if (scanf("%d", &choix) != 1) {
        printf("Erreur : entree invalide\n");
        return 1;
    }

    switch (choix) {
        case 1: printf("Bonjour\n"); break;
        case 2: printf("Au revoir\n"); break;
        case 3: printf("Merci\n"); break;
        case 4: printf("Quitter\n"); break;
        default: printf("Erreur : choix invalide\n"); break;
    }

    return 0;
}
