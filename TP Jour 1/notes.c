#include <stdio.h>

int exo_conditions(void) {

    float note;

    printf("Entrer votre note: ");
    scanf("%f", &note);

    if (note >= 16) {
        printf("Votre appréciation : Exellent !");
    }else if (note >= 14) {
        printf("Votre appréciation : Très bien !");
    }else if (note >= 12) {
        printf("Votre appréciation : Bien");
    }else if (note >= 10) {
        printf("Votre appréciation : Assez bien");
    }else {
        printf("Votre appréciation : Insuffisant");
    }
}