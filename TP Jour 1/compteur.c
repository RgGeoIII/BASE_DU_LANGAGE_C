#include <stdio.h>

int exo_compteur(void) {
    int n = 0;
    int i = 1;
    int somme = 0;

    printf("Entrez un nombre : ");
    if (scanf("%d", &n) != 1) {
        printf("Erreur : entree invalide\n");
        return 1;
    }

    while (i <= n) {
        printf("%d ", i);
        somme += i;
        i++;
    }
    printf("\nSomme : %d\n", somme);

    return 0;
}
