#include <stdio.h>  // Biblioteca para entrada e saída

int main() {
    // Declaração de variáveis
    int a = 10, b = 3;
    float x = 5.5, y = 2.0;

    // Operadores Aritméticos
    int soma = a + b;             // Adição
    int subtracao = a - b;        // Subtração
    int multiplicacao = a * b;    // Multiplicação
    float divisao = (float)a / b; // Divisão (convertendo int para float)
    int resto = a % b;            // Módulo (resto da divisão inteira)

    // Operadores com números de ponto flutuante
    float soma_float = x + y;
    float subtracao_float = x - y;
    float multiplicacao_float = x * y;
    float divisao_float = x / y;

    // Exibindo os resultados
    printf("Operadores com inteiros:\n");
    printf("Soma: %d + %d = %d\n", a, b, soma);
    printf("Subtração: %d - %d = %d\n", a, b, subtracao);
    printf("Multiplicação: %d * %d = %d\n", a, b, multiplicacao);
    printf("Divisão: %d / %d = %.2f\n", a, b, divisao); // %.2f para limitar a 2 casas decimais
    printf("Módulo: %d %% %d = %d\n\n", a, b, resto);   // %% para exibir o caractere %

    printf("Operadores com floats:\n");
    printf("Soma: %.1f + %.1f = %.1f\n", x, y, soma_float);
    printf("Subtração: %.1f - %.1f = %.1f\n", x, y, subtracao_float);
    printf("Multiplicação: %.1f * %.1f = %.1f\n", x, y, multiplicacao_float);
    printf("Divisão: %.1f / %.1f = %.2f\n", x, y, divisao_float);

    return 0;
}
