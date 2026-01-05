#include <stdio.h>

int exo_bissextile(void) {
    int annee;

    printf("Entrez une annee : ");
    if (scanf("%d", &annee) != 1) return 1;

    int bissextile = (annee % 4 == 0) && ((annee % 100 != 0) || (annee % 400 == 0));

    if (bissextile)
        printf("%d est une annee bissextile\n", annee);
    else
        printf("%d n'est pas une annee bissextile\n", annee);

    return 0;
}
