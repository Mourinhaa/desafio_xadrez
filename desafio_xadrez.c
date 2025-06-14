#include <stdio.h>

// Função recursiva para a Torre
void torre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        torre(casas - 1);
    }
}

// Função recursiva para o Bispo
void bispo(int casas) {
    if (casas > 0) {
        printf("Cima, Direita\n");
        bispo(casas - 1);
    }
}

// Função recursiva para a Rainha
void rainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        rainha(casas - 1);
    }
}

// Função para o Cavalo com loops aninhados
void cavalo() {
    int casasParaCima = 2;
    int casasParaDireita = 1;
    int i;
    for (i = 0; i < casasParaCima; i++) {
        printf("Cima\n");
    }
    int j;
    for (j = 0; j < casasParaDireita; j++) {
        printf("Direita\n");
    }
}

// Função para o Bispo com loops aninhados
void bispoLoops(int casas) {
    int i;
    for (i = 0; i < casas; i++) {
        printf("Cima, ");
        printf("Direita\n");
    }
}

int main() {
    // Torre
    printf("Movimento da Torre:\n");
    torre(5);

    // Bispo
    printf("\nMovimento do Bispo:\n");
    bispo(5);
    printf("\nMovimento do Bispo com Loops:\n");
    bispoLoops(5);

    // Rainha
    printf("\nMovimento da Rainha:\n");
    rainha(8);

    // Cavalo
    printf("\nMovimento do Cavalo:\n");
    cavalo();

    return 0;
}
