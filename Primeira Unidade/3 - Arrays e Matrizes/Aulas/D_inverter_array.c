#include <stdio.h> 

int main(){
    int arr[5] = {1,2,3,4,5};
    int temp;
    int metade_tamanho_arr = 2;

    for(int i = 0; i < metade_tamanho_arr; i++){
        int complemento = 4 - i;
        temp = arr[i];
        arr[i] = arr[complemento];
        arr[complemento] = temp;
    }

    for(int i = 0; i<5; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

