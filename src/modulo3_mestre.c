#include <stdio.h>
#define N 7

int main() {
    int tabuleiro[N][N] = {0};

    int x=3, y=3; // ponto central da habilidade

    // Habilidade em cruz
    for(int i=0; i<N; i++){
        tabuleiro[x][i] = 2; // linha
        tabuleiro[i][y] = 2; // coluna
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
