#include <stdio.h>

int exo_moyenne(void) {
    double n1, n2, n3;
    double c1, c2, c3;

    printf("Note 1 : ");
    if (scanf("%lf", &n1) != 1) return 1;
    printf("Coefficient 1 : ");
    if (scanf("%lf", &c1) != 1) return 1;

    printf("Note 2 : ");
    if (scanf("%lf", &n2) != 1) return 1;
    printf("Coefficient 2 : ");
    if (scanf("%lf", &c2) != 1) return 1;

    printf("Note 3 : ");
    if (scanf("%lf", &n3) != 1) return 1;
    printf("Coefficient 3 : ");
    if (scanf("%lf", &c3) != 1) return 1;

    double sommeCoef = c1 + c2 + c3;
    if (sommeCoef == 0) {
        printf("Erreur : somme des coefficients = 0\n");
        return 1;
    }

    double moyenne = (n1 * c1 + n2 * c2 + n3 * c3) / sommeCoef;

    printf("Moyenne : %.2f/20\n", moyenne);

    // Barème (à adapter si ton exo 5 dit autre chose)
    if (moyenne >= 16) printf("Appreciation : Tres bien !\n");
    else if (moyenne >= 14) printf("Appreciation : Bien !\n");
    else if (moyenne >= 12) printf("Appreciation : Assez bien !\n");
    else if (moyenne >= 10) printf("Appreciation : Passable.\n");
    else printf("Appreciation : Insuffisant.\n");

    return 0;
}
