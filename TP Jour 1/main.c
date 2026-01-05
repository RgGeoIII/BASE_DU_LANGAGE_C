#include <stdio.h>

void exo_hello(void);
void exo_variables(void);
void exo_calculatrice(void);
void exo_saisie(void);
void exo_conditions(void);
void exo_parite(void);
void exo_comparaison(void);
void exo_ascii(void);
void exo_menu(void);
void exo_compteur(void);
void exo_table(void);
void exo_operateurs(void);
void exo_break_continue(void);
void exo_temperature(void);
void exo_moyenne(void);
void exo_calc_interactive(void);
void exo_bissextile(void);
void exo_caractere(void);
void exo_tva(void);
void exo_triangle(void);
void exo_rectangle(void);
void exo_cercle(void);

int main(void) {
    int choix = 0;

    printf("Choisis un exercice :\n");
    printf("1) Hello\n");
    printf("2) Variables\n");
    printf("3) Calculatrice simple\n");
    printf("4) Saisie\n");
    printf("5) Conditions\n");
    printf("6) Parite\n");
    printf("7) Comparaison\n");
    printf("8) AscII\n");
    printf("9) Menu\n");
    printf("10) compteur\n");
    printf("11) table\n");
    printf("12) operateurs\n");
    printf("13) break_continue\n");
    printf("111) temperature\n");
    printf("112) moyenne\n");
    printf("113) calc_interactive\n");
    printf("114) bissextile\n");
    printf("115) caractere\n");
    printf("116) tva\n");
    printf("117) triangle\n");
    printf("118) rectangle\n");
    printf("119) cercle\n");
    printf("> ");
    scanf("%d", &choix);

    if (choix == 1) exo_hello();
    else if (choix == 2) exo_variables();
    else if (choix == 3) exo_calculatrice();
    else if (choix == 4) exo_saisie();
    else if (choix == 5) exo_conditions();
    else if (choix == 6) exo_parite();
    else if (choix == 7) exo_comparaison();
    else if (choix == 8) exo_ascii();
    else if (choix == 9) exo_menu();
    else if (choix == 10) exo_compteur();
    else if (choix == 11) exo_table();
    else if (choix == 12) exo_operateurs();
    else if (choix == 13) exo_break_continue();
    else if (choix == 111) exo_temperature();
    else if (choix == 112) exo_moyenne();
    else if (choix == 113) exo_calc_interactive();
    else if (choix == 114) exo_bissextile();
    else if (choix == 115) exo_caractere();
    else if (choix == 116) exo_tva();
    else if (choix == 117) exo_triangle();
    else if (choix == 118) exo_rectangle();
    else if (choix == 119) exo_cercle();
    else printf("Choix invalide.\n");

    return 0;
}
