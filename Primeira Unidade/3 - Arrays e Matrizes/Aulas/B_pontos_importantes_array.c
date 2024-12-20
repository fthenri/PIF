// Limites de um array
// Acessar índices fora do intervalo definido resulta em comportamento indefinido.

// Tamanho do array
// Use sizeof para obter o tamanho em bytes
// Aqui usaremos a seguinte lógica:
// 1. Obter o tamanho do array em bytes
// 2. Dividir o tamanho em bytes pelo tamanho de cada elemento

int main(){
    int numeros[5];
    // tamanho do array em bytes dividido por tamanho em bytes pelo tamanho de cada elemento
    printf("Tamanho do array: %lu\n", sizeof(numeros) / sizeof(numeros[0])); 
    
    return 0;
}

// Aprendam isso! Cai muito em prova :/
