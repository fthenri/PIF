#include <stdio.h>

int main(){
    // MATRIZ DIAGONAL SUPERIOR:
    int matriz_A[5][5] = {{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
    int soma_A = 0;

    for(int i = 0; i < 5; i++){
        for(int j = i; j < 5; j++){
            soma_A += matriz_A[i][j];
        }
    }

    printf("%d\n", soma_A);

    // MATRIZ DIAGONAL INFERIOR
    int matriz_B[5][5] = {{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
    int soma_B = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < i; j++){
            soma_B += matriz_B[i][j];
        }    
    }

    printf("%d\n", soma_B);

    return 0;
}