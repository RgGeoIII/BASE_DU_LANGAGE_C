#include <stdio.h>

int exo_saisie(){

    char nom[50];
    int age;
    float note;

    printf("Entre votre nom : ");
    scanf("%s", &nom);
    printf("Entrez votre age : ");
    scanf("%d", &age);
    printf("Entrez votre note : ");
    scanf("%f", &note);

    printf("Bonjour, %s, vous avez %d ans et votre note est %f\n" ,nom, age, note);

    return 0;

}