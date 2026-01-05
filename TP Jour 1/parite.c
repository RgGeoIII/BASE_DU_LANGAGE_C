#include <stdio.h>

int exo_parite(void) {

    int nombre;

    printf("Entrer un nombre:\n");
    scanf("%d", &nombre);

    if (nombre  % 2 ==0) {
        printf("%d est pair\n", nombre);
    } else {
        printf("%d est impair\n", nombre);
    }

    if (nombre >0) {
        printf ("%d est positif\n", nombre);
    }else if (nombre <0) {
        printf ("%d est negatif\n", nombre);
    }else {
        printf ("%d est null\n", nombre);
    }

}