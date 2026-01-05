#include <stdio.h>

int exo_operateurs(void) {
    int score = 0;

    printf("Score initial : %d\n", score);

    score += 10;
    printf("Apres += 10 : %d\n", score);

    score *= 2;
    printf("Apres *= 2 : %d\n", score);

    score -= 5;
    printf("Apres -= 5 : %d\n", score);

    score /= 3;
    printf("Apres /= 3 : %d\n", score);

    score++;
    printf("Apres ++ : %d\n", score);

    score--;
    printf("Apres -- : %d\n", score);

    printf("Score final : %d\n", score);

    return 0;
}
