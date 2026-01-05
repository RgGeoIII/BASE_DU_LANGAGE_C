#include <stdio.h>

int exo_cercle(void) {
    int r;

    printf("Entrez le rayon du cercle (1-20) : ");
    if (scanf("%d", &r) != 1) return 1;

    if (r < 1 || r > 20) {
        printf("Erreur : le rayon doit etre entre 1 et 20\n");
        return 0;
    }

    int taille = 2 * r + 1;
    int rr = r * r;
    int seuil = r; // épaisseur approx du contour

    for (int y = 0; y < taille; y++) {
        for (int x = 0; x < taille; x++) {
            int dx = x - r;
            int dy = y - r;
            int d2 = dx * dx + dy * dy;

            if (d2 >= rr - seuil && d2 <= rr + seuil) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }

    return 0;
}
