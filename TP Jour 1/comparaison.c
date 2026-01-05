#include <stdio.h>

int exo_comparaison() {

    int premiernombre;
    int secondnombre;

    printf ("Entrer le 1er nombre\n");
    scanf ("%d", &premiernombre);
    printf ("Entrer le 2eme nombre\n");
    scanf ("%d", &secondnombre);

    if (premiernombre > secondnombre) {
        printf ("Le plus grand nombre est %d\n", premiernombre);
    }else {
        printf ("Le plus grand nombre est %d\n", secondnombre);
    }
}