#include <stdio.h>

int exo_triangle(void) {
    int h;

    printf("Entrez la hauteur du triangle (1-20) : ");
    if (scanf("%d", &h) != 1) return 1;

    if (h < 1 || h > 20) {
        printf("Erreur : la hauteur doit etre entre 1 et 20\n");
        return 0;
    }

    for (int i = 0; i < h; i++) {
        int espaces = h - i - 1;
        int etoiles = 2 * i + 1;

        for (int s = 0; s < espaces; s++) printf(" ");
        for (int e = 0; e < etoiles; e++) printf("*");
        printf("\n");
    }

    return 0;
}
