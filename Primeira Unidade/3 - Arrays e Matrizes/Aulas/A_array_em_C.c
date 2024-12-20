// Em C:
int numeros[5] = {1, 2, 3, 4, 5}; // Array de inteiros com tamanho fixo (5 elementos)
//int numeros[5] = {1, 2}; // Os outros valores serão 0 automaticamente
char letras[4] = {'A', 'B', 'C', 'D'}; // Array de caracteres com tamanho fixo (4 elementos)

// Comparação com Python:

// Em Python:
// numeros = [1, 2, 3, 4, 5]  Lista de inteiros, o equivalente mais próximo a um array em C.
// letras = ['A', 'B', 'C', 'D']  Lista de caracteres.

// Diferenças principais:
// 1. Em Python, as listas são **dinâmicas**: o tamanho não é fixo e pode ser alterado.
//    Exemplo: letras.append('E') adiciona um novo elemento à lista 'letras'.
// 2. Python não requer declaração explícita do tamanho ou tipo da lista.
//    Já em C, o tamanho e o tipo do array devem ser declarados no momento da criação.
// 3. A sintaxe de inicialização é mais simples em Python, sem necessidade de definir o tipo ou tamanho.

int main(){
    printf("%d", numeros[2]); // Acessa o terceiro elemento (índice 2)
    numeros[1] = 10;          // Modifica o segundo elemento

    for (int i = 0; i < 5; i++) {
    printf("%d ", numeros[i]);
    }

    return 0;
}
