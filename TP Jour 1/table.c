#include <stdio.h>

int exo_table(void) {
    int n;

    printf("Entrez un nombre : ");
    if (scanf("%d", &n) != 1) {
        printf("Erreur : entree invalide\n");
        return 1;
    }

    printf("Table de multiplication de %d :\n", n);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
