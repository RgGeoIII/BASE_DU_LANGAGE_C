#include <stdio.h>

int exo_tva(void) {
    double ht, taux;

    printf("Prix HT : ");
    if (scanf("%lf", &ht) != 1) return 1;

    printf("Taux de TVA (%%) : ");
    if (scanf("%lf", &taux) != 1) return 1;

    double montant = ht * (taux / 100.0);
    double ttc = ht + montant;

    printf("Montant de la TVA : %.2f€\n", montant);
    printf("Prix TTC : %.2f€\n", ttc);

    return 0;
}
