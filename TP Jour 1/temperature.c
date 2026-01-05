#include <stdio.h>

int exo_temperature(void) {
    double c;

    printf("Entrez la temperature en Celsius : ");
    if (scanf("%lf", &c) != 1) {
        printf("Erreur : entree invalide\n");
        return 1;
    }

    double f = (c * 9.0 / 5.0) + 32.0;
    double k = c + 273.15;

    printf("%.2f°C = %.2f°F\n", c, f);
    printf("%.2f°C = %.2fK\n", c, k);

    return 0;
}
