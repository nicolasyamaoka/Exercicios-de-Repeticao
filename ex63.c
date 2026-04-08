#include <stdio.h>

int main() {
    float valor, total;
    int i; 

    for(i = 1; i <= 10; i++){
        printf("Digite um valor: ");
        scanf("%f", &valor);
        total = total + valor;
    }
    printf("\na soma dos 10 numeros e %f", total);
}
