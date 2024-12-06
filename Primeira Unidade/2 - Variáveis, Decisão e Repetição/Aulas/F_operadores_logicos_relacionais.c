#include <stdio.h>  // Biblioteca para entrada e saída

int main() {
    int a, b;

    // Solicita dois números inteiros ao usuário
    printf("Digite o primeiro número inteiro (a): ");
    scanf("%d", &a);
    printf("Digite o segundo número inteiro (b): ");
    scanf("%d", &b);

    // Operadores Relacionais
    printf("\nOperadores Relacionais:\n");
    printf("a > b: %d (1 para verdadeiro, 0 para falso)\n", a > b);   // Maior que
    printf("a < b: %d\n", a < b);                                   // Menor que
    printf("a == b: %d\n", a == b);                                 // Igual a
    printf("a != b: %d\n", a != b);                                 // Diferente de
    printf("a >= b: %d\n", a >= b);                                 // Maior ou igual a
    printf("a <= b: %d\n", a <= b);                                 // Menor ou igual a

    // Operadores Lógicos
    int x = 1, y = 0;  // x é verdadeiro (1), y é falso (0)
    printf("\nOperadores Lógicos:\n");
    printf("x && y: %d (E lógico - verdadeiro se ambos forem verdadeiros)\n", x && y);
    printf("x || y: %d (OU lógico - verdadeiro se pelo menos um for verdadeiro)\n", x || y);
    printf("!x: %d (NÃO lógico - inverte o valor lógico de x)\n", !x);

    // Combinação de operadores relacionais e lógicos
    printf("\nCombinação de Operadores:\n");
    if (a > 0 && b > 0) {
        printf("a e b são positivos.\n");
    } else if (a > 0 || b > 0) {
        printf("Pelo menos um entre a e b é positivo.\n");
    } else {
        printf("Nenhum dos números é positivo.\n");
    }

    return 0;
}
