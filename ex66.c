#include <stdio.h>

int main() {
    float valor, total;
    int a, b, i; 

    printf("Digite um valor: ");
    scanf("%d", &a);
    printf("Digite outro valor: ");
    scanf("%d", &b);


    for(i = a + 1 ; i < b; i++){
        total = total + i;
    }
    printf("\na soma dos 10 numeros e %f", total);   
}
