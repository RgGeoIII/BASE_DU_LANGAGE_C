#include <stdio.h>

int exo_ascii(void) {

    int code;

    printf("Entrer un nombre entier\n");
    scanf("%d", &code);

    if (code >= 32 && code <= 126) {
        char c = (char)code;
        printf("Le caractere correspondant au code est %d est : '%c'\n", code, c);
    }else {
        printf("Erreur : le code doit etre entre entre 32 et 126\n");
    }
    return 0;
}