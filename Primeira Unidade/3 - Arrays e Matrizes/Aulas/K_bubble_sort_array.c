#include<stdio.h>

#define TAMANHO 5

int main() {

    int arr[TAMANHO] = {4,3,2,5,1};

    for (int i = 0; i < TAMANHO - 1; i++) {
        // Percorre o array até o último elemento não ordenado
        for (int j = 0; j < TAMANHO - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos se estiverem fora de ordem
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}