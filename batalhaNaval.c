#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};
    int i, j;

    // Navio horizontal
    for (j = 0; i < 4; j++) {
        tabuleiro[1][j] = 3;
    }
    // Navio vertical
    for (i = 0; i < 4; i++) {
        tabuleiro[i][4] = 3;
    }
    // Navio diagonal principal
    for (i =0; i < 4; i++) {
        tabuleiro[i][i] = 3;
    }
    // Navio diagonal secundária
    for (i = 0; i < 4; i++) {
        tabuleiro[i][9 - i] = 3;
    }
    //Exibe o tabuleiro
    printf("\nTabuleiro 10x10:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d", tabuleiro[i][j]);
        }
        printf("\n");
    }
    return 0;
}
