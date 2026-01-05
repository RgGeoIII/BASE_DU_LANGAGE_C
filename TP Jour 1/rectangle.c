#include <stdio.h>

int exo_rectangle(void) {
    int largeur, hauteur;

    printf("Largeur (1-20) : ");
    if (scanf("%d", &largeur) != 1) return 1;

    printf("Hauteur (1-20) : ");
    if (scanf("%d", &hauteur) != 1) return 1;

    if (largeur < 1 || largeur > 20 || hauteur < 1 || hauteur > 20) {
        printf("Erreur : valeurs entre 1 et 20\n");
        return 0;
    }

    for (int i = 0; i < hauteur; i++) {
        for (int j = 0; j < largeur; j++) {
            int bord = (i == 0 || i == hauteur - 1 || j == 0 || j == largeur - 1);
            if (bord) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }

    return 0;
}
