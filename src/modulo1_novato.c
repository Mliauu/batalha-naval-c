#include <stdio.h>
#define TAM 10

int main() {
    int tabuleiro[TAM] = {0}; 
    tabuleiro[2] = 1; 
    tabuleiro[5] = 1; 

    for(int i=0; i<TAM; i++){
        printf("%d ", tabuleiro[i]);
    }

    return 0;
}
