#include <stdio.h>

#define SIZE 8

// Função para inicializar o tabuleiro
void inicializarTabuleiro(char tabuleiro[SIZE][SIZE]) {
    const char *linhas = "RNBQKBNR"; // Peças da primeira linha
    for (int i = 0; i < SIZE; i++) {
        tabuleiro[0][i] = linhas[i];       // Primeira linha
        tabuleiro[1][i] = 'P';              // Peões
        tabuleiro[6][i] = 'p';              // Peões pretos
        tabuleiro[7][i] = linhas[i] + 32;   // Segunda linha (minúsculas)
    }
    for (int i = 2; i < 6; i++) {
        for (int j = 0; j < SIZE; j++) {
            tabuleiro[i][j] = '.';          // Espaços vazios
        }
    }
}

// Função para exibir o tabuleiro
void exibirTabuleiro(char tabuleiro[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    char tabuleiro[SIZE][SIZE];
    inicializarTabuleiro(tabuleiro);
    exibirTabuleiro(tabuleiro);
    return 0;
}
