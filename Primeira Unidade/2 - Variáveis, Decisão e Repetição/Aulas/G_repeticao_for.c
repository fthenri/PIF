#include <stdio.h>  // Biblioteca para entrada e saída

int main() {
    int i, n;

    // Solicita um número ao usuário para definir o limite do laço
    printf("Digite um número inteiro positivo para o limite do laço: ");
    scanf("%d", &n);

    // Exemplo básico de laço for: Contando de 1 até n
    printf("\nContando de 1 até %d:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i); // Imprime o valor atual de i
    }

    // Exemplo de laço for com decremento: Contando de n até 1
    printf("\n\nContando de %d até 1:\n", n);
    for (i = n; i >= 1; i--) {
        printf("%d ", i);
    }

    // Exemplo de laço for com incremento de 2: Contando apenas os números pares
    printf("\n\nNúmeros pares de 1 até %d:\n", n);
    for (i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }

    // Exemplo de laço for com uma operação dentro
    printf("\n\nQuadrados dos números de 1 até %d:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d^2 = %d\n", i, i * i); // Calcula e imprime o quadrado de i
    }

    return 0;
}
