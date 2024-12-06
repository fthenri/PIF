#include <stdio.h>  // Biblioteca para entrada e saída

int main() {
    int numero;

    // Solicita um número ao usuário
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Exemplo de if
    if (numero > 0) {
        printf("O número é positivo.\n");
    }

    // Exemplo de if-else
    if (numero % 2 == 0) {
        printf("O número é par.\n");
    } else {
        printf("O número é ímpar.\n");
    }

    // Exemplo de if-else if-else
    if (numero < 0) {
        printf("O número é negativo.\n");
    } else if (numero == 0) {
        printf("O número é zero.\n");
    } else {
        printf("O número é positivo.\n");
    }

    // Exemplo de switch
    printf("Verificando se o número está entre 1 e 3...\n");
    switch (numero) {
        case 1:
            printf("Você digitou o número 1.\n");
            break;
        case 2:
            printf("Você digitou o número 2.\n");
            break;
        case 3:
            printf("Você digitou o número 3.\n");
            break;
        default:
            printf("O número não está entre 1 e 3.\n");
            break;
    }

    return 0;
}
