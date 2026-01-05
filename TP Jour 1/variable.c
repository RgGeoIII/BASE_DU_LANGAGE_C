#include <stdio.h>

int exo_variables(void) {
    int age = 20;
    char initiale = 'G';
    float taille = 1.75;

    printf("Mon age est : %d\n", age);
    printf("Mon initiale est : %c\n", initiale);
    printf("Ma taille est : %.2f m\n", taille);

    return 0;
}
