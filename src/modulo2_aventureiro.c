#include <stdio.h>
#define N 5

int main() {
    int tabuleiro[N][N] = {0};

    // Navio horizontal
    for(int j=0; j<3; j++) tabuleiro[1][j] = 1;

    // Navio vertical
    for(int i=0; i<3; i++) tabuleiro[i][4] = 1;

    // Navio diagonal
    for(int i=0; i<3; i++) tabuleiro[i][i] = 1;

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
