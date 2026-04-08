#include <stdio.h>

int main() {
    float valor, media, total;
    int i; 

    for(i = 1; i <= 10; i++){
        printf("Digite um valor: ");
        scanf("%f", &valor);
        total = total + valor;
    }
    media = total / 10;
    printf("\no valor da media e %f", media);
}
