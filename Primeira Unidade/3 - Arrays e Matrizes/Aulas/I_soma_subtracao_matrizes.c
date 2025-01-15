#include<stdio.h>

#define LINHAS 2
#define COLUNAS 2

int main() {

    // SOMA
    int matriz1[LINHAS][COLUNAS] = {{1, 2}, {3, 4}};
    int matriz2[LINHAS][COLUNAS] = {{5, 6}, {7, 8}};
    int resultado[LINHAS][COLUNAS];

    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            printf("%d ", resultado[i][j]);
        }
    }

    // SUBTRAÇÃO (mesma coisa so muda o sinal)
    int matriz1[LINHAS][COLUNAS] = {{1, 2}, {3, 4}};
    int matriz2[LINHAS][COLUNAS] = {{5, 6}, {7, 8}};
    int resultado[LINHAS][COLUNAS];

    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            resultado[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }

    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            printf("%d ", resultado[i][j]);
        }
    }

    return 0;
}