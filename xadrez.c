#include <stdio.h>

// Função recursiva para movimentar a Torre (5 casas para a direita)
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Função recursiva para movimentar o Bispo (5 casas na diagonal para cima e à direita)
void moverBispo(int passos) {
    if (passos == 0) return;
    printf("Cima Direita\n");
    moverBispo(passos - 1);
}

// Função recursiva para movimentar a Rainha (8 casas para a esquerda)
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

int main() {
    int i, j;

    // Movimento da Torre usando função recursiva
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    // Movimento do Bispo usando função recursiva
    printf("Movimento do Bispo:\n");
    moverBispo(5);
    printf("\n");

    // Movimento da Rainha usando função recursiva
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    // Movimento do Cavalo: 1 vez em L para cima e à direita
    printf("Movimento do Cavalo:\n");

    for (i = 0, j = 0; i < 2 || j < 1; i++, j++) {
        if (i < 2) {
            printf("Cima\n");
            if (i == 1) continue; // Permite continuar até completar o movimento
        }
        if (j < 1) {
            printf("Direita\n");
            break; // Encerra a repetição após o movimento completo
        }
    }

    return 0;
}
