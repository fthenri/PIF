int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,26};
    int soma = 0;

    for(int i = 0; i<10; i++){
        soma += arr[i];
    }

    printf("%d", soma);

    return 0;
}