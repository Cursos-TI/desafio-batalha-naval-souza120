#include <stdio.h>

#define N 10

// Habilidades
int cone[3][5] = {
    {0,1,0,0,0},
    {0,1,1,1,0},
    {1,1,1,1,1}
};

int cruz[3][5] = {
    {0,1,0,0,0},
    {0,1,1,1,0},
    {0,0,1,0,0}
};

int octaedro[3][5] = {
    {0,0,1,0,0},
    {0,1,1,1,0},
    {0,0,1,0,0}
};

// Aplica habilidade no tabuleiro
void aplicarHabilidade(int tabuleiro[N][N], int habilidade[3][5], int linha, int coluna) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (habilidade[i][j] == 1) {
                int x = linha + i;
                int y = coluna + j;
                if (x >= 0 && x < N && y >= 0 && y < N) {
                    tabuleiro[x][y] = 1; // marca como atingido
                }
            }
        }
    }
}

// Mostra tabuleiro
void mostrarTabuleiro(int tabuleiro[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[N][N] = {0};
    printf("Tabuleiro inicial:\n");
    mostrarTabuleiro(tabuleiro);

    aplicarHabilidade(tabuleiro, cone, 2, 2);
    printf("\nApós cone:\n");
    mostrarTabuleiro(tabuleiro);

    aplicarHabilidade(tabuleiro, cruz, 5, 5);
    printf("\nApós cruz:\n");
    mostrarTabuleiro(tabuleiro);

    aplicarHabilidade(tabuleiro, octaedro, 7, 3);
    printf("\nApós octaedro:\n");
    mostrarTabuleiro(tabuleiro);

    return 0;
}
