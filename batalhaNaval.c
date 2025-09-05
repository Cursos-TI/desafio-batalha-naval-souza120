#include <stdio.h>

int main() {
    int tabuleiro[5][5] = {0};
    int i, j;

    // Navio horizontal (linha 1, colunas 0 a 3)
    for (j = 0; j < 4; j++) {
        tabuleiro[1][j] = 3;
        printf("Navio horizontal em: (%d,%d)\n", 1, j);
    }
    // Navio vertical (coluna 4, linhas 0 a 3)
    for (i = 0; i < 4; i++) {
        tabuleiro[i][4] = 3;
        printf("Navio vertical em: (%d,%d)\n", i, 4);
    }
    return 0;
}
