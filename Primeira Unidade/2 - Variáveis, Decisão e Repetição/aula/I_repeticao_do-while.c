#include <stdio.h>  // Biblioteca para entrada e saída

int main() {
    int numero;

    // Exemplo básico de do-while: Garantir pelo menos uma execução
    printf("Digite um número inteiro positivo (ou negativo para sair): ");
    do {
        scanf("%d", &numero);
        if (numero >= 0) {
            printf("Você digitou: %d\n", numero);
            printf("Digite outro número inteiro positivo (ou negativo para sair): ");
        }
    } while (numero >= 0); // Repete enquanto o número for positivo ou zero

    printf("Você digitou um número negativo. Saindo do programa.\n");

    // Outro exemplo: Menu de opções
    int opcao;
    do {
        printf("\nMenu de Opções:\n");
        printf("1. Exibir mensagem\n");
        printf("2. Mostrar um cálculo\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Olá! Esta é uma mensagem.\n");
                break;
            case 2:
                printf("2 + 2 = 4\n");
                break;
            case 3:
                printf("Saindo do menu...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    } while (opcao != 3); // Continua exibindo o menu até que o usuário escolha sair

    return 0;
}
