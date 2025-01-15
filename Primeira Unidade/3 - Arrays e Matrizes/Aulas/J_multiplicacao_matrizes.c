#include<stdio.h>

#define LINHAS1 2
#define COLUNAS1 3
#define LINHAS2 3
#define COLUNAS2 2

int main() {
    
    int matriz1[LINHAS1][COLUNAS1] = {{1, 2, 3}, {4, 5, 6}};
    int matriz2[LINHAS2][COLUNAS2] = {{7, 8}, {9, 10}, {11, 12}};
    int resultado[LINHAS1][COLUNAS2];
    // regra de compatibilidade (k)
    // resultado[i][j]
    // matriz1[i][k] * matriz2[k][j]
    
    for (int i = 0; i < LINHAS1; i++) {
        for (int j = 0; j < COLUNAS2; j++) {
            resultado[i][j] = 0; // Inicializa o valor na posição
            for (int k = 0; k < COLUNAS1; k++) { // COLUNAS1 ou LINHAS2 tanto faz pois devem ser iguais
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    for (int i = 0; i < LINHAS1; i++) {
        for (int j = 0; j < COLUNAS2; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}