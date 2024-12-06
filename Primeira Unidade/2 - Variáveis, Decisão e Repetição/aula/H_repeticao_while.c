#include <stdio.h>  // Biblioteca para entrada e saída

int main() {
    int i = 1, n;

    // Solicita um número ao usuário para definir o limite do laço
    printf("Digite um número inteiro positivo para o limite do laço: ");
    scanf("%d", &n);

    // Exemplo básico de laço while: Contando de 1 até n
    printf("\nContando de 1 até %d:\n", n);
    while (i <= n) {
        printf("%d ", i); // Imprime o valor atual de i
        i++;              // Incrementa i
    }

    // Reinicia a variável para o próximo exemplo
    i = n;

    // Exemplo de laço while com decremento: Contando de n até 1
    printf("\n\nContando de %d até 1:\n", n);
    while (i >= 1) {
        printf("%d ", i); // Imprime o valor atual de i
        i--;              // Decrementa i
    }

    // Reinicia a variável para o próximo exemplo
    i = 1;

    // Exemplo de laço while com números pares
    printf("\n\nNúmeros pares de 1 até %d:\n", n);
    while (i <= n) {
        if (i % 2 == 0) {
            printf("%d ", i); // Imprime i se for par
        }
        i++; // Incrementa i
    }

    // Exemplo com condição de parada baseada na entrada do usuário
    int soma = 0, valor;
    printf("\n\nDigite números inteiros para somar (digite 0 para parar):\n");
    while (1) { // Laço infinito
        scanf("%d", &valor);
        if (valor == 0) { // Condição de parada
            break;
        }
        soma += valor; // Soma o valor digitado
    }
    printf("A soma dos números digitados é: %d\n", soma);

    return 0;
}
