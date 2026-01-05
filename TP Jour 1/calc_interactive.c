#include <stdio.h>

int exo_calc_interactive(void) {
    double a, b;
    char op;

    printf("Entrez le premier nombre : ");
    if (scanf("%lf", &a) != 1) return 1;

    printf("Entrez le deuxieme nombre : ");
    if (scanf("%lf", &b) != 1) return 1;

    printf("Choisissez l'operation (+, -, *, /, %%) : ");
    scanf(" %c", &op); // espace avant %c = saute les retours ligne

    if (op == '+') {
        printf("Resultat : %.0f + %.0f = %.0f\n", a, b, a + b);
    } else if (op == '-') {
        printf("Resultat : %.0f - %.0f = %.0f\n", a, b, a - b);
    } else if (op == '*') {
        printf("Resultat : %.0f * %.0f = %.0f\n", a, b, a * b);
    } else if (op == '/') {
        if (b == 0) {
            printf("Erreur : division par zero\n");
        } else {
            printf("Resultat : %.0f / %.0f = %.2f\n", a, b, a / b);
        }
    } else if (op == '%') {
        long long ia = (long long)a;
        long long ib = (long long)b;
        if (ib == 0) {
            printf("Erreur : modulo par zero\n");
        } else {
            printf("Resultat : %lld %% %lld = %lld\n", ia, ib, ia % ib);
        }
    } else {
        printf("Erreur : operation invalide\n");
    }

    return 0;
}
