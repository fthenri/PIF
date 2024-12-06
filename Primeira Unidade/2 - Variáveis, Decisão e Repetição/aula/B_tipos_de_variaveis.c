#include <stdio.h>  // Biblioteca para entrada e saída

int main() {
    // Declaração de variáveis
    char letra = 'A';                  // Tipo char para armazenar um caractere
    int numero_inteiro = 42;           // Tipo int para números inteiros
    float numero_decimal = 3.14f;      // Tipo float para números decimais (precisão simples)
    double numero_grande = 12345.6789; // Tipo double para números decimais maiores (precisão dupla)
    char texto[] = "Olá, mundo!";      // Tipo string (array de char)

    // Arrays
    int inteiros[3] = {1, 2, 3};       // Array de inteiros
    float decimais[3] = {1.1, 2.2, 3.3};  // Array de floats
    double grandes[2] = {10.1111, 20.2222}; // Array de doubles

    // Imprimindo os valores das variáveis
    printf("Caractere: %c\n", letra);
    printf("Número inteiro: %d\n", numero_inteiro);
    printf("Número decimal (float): %.2f\n", numero_decimal);  // %.2f para limitar a 2 casas decimais
    printf("Número decimal (double): %.4lf\n", numero_grande); // %.4lf para 4 casas decimais
    printf("Texto (string): %s\n", texto);

    // Imprimindo os elementos dos arrays
    printf("\nArray de inteiros: %d, %d, %d\n", inteiros[0], inteiros[1], inteiros[2]);
    printf("Array de floats: %.1f, %.1f, %.1f\n", decimais[0], decimais[1], decimais[2]);
    printf("Array de doubles: %.4lf, %.4lf\n", grandes[0], grandes[1]);

    return 0;
}
