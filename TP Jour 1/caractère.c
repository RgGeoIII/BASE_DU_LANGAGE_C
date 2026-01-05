#include <stdio.h>

int exo_caractere(void) {
    char c;

    printf("Entrez un caractere : ");
    scanf(" %c", &c);

    int code = (unsigned char)c;

    if (c >= 'A' && c <= 'Z') {
        printf("'%c' est une lettre majuscule\n", c);
    } else if (c >= 'a' && c <= 'z') {
        printf("'%c' est une lettre minuscule\n", c);
    } else if (c >= '0' && c <= '9') {
        printf("'%c' est un chiffre\n", c);
    } else {
        printf("'%c' est un autre caractere\n", c);
    }

    printf("Code ASCII : %d\n", code);

    return 0;
}
