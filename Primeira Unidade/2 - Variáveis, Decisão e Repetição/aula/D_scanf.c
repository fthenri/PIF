#include <stdio.h>  // Biblioteca para entrada e saída

int main() {
    // Declaração de variáveis
    char letra;
    int inteiro;
    float decimal;
    double grande_decimal;
    char texto[50]; // Para strings, definimos um tamanho fixo do array

    // Entrada de dados do usuário
    printf("Digite um caractere: ");
    scanf(" %c", &letra); // Espaço antes de %c para ignorar qualquer caractere residual no buffer

    printf("Digite um número inteiro: ");
    scanf("%d", &inteiro);

    printf("Digite um número decimal (float): ");
    scanf("%f", &decimal);

    printf("Digite um número decimal grande (double): ");
    scanf("%lf", &grande_decimal);

    printf("Digite um texto (sem espaços): ");
    scanf("%s", texto); // Para strings, não usamos o operador '&'

    // Exibindo os dados recebidos
    printf("\nVocê digitou:\n");
    printf("Caractere: %c\n", letra);
    printf("Número inteiro: %d\n", inteiro);
    printf("Número decimal (float): %.2f\n", decimal);  // %.2f limita a 2 casas decimais
    printf("Número decimal grande (double): %.4lf\n", grande_decimal); // %.4lf limita a 4 casas decimais
    printf("Texto: %s\n", texto);

    return 0;
}
