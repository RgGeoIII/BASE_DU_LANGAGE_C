#include <stdio.h>

int exo_break_continue(void) {
    printf("Nombres affiches :\n");

    for (int i = 1; i <= 20; i++) {
        if (i % 3 == 0) continue;
        if (i == 15) {
            printf("\nLa boucle s'arrete a 15\n");
            break;
        }
        printf("%d ", i);
    }

    return 0;
}
