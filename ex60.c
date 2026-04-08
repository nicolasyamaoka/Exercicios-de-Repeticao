#include <stdio.h>

int main() {
    float i, fora = 0, dentro = 0, valor;

    for(i = 1; i <= 10; i++){
        printf("\nDigite um valor: ");
        scanf("%f", &valor);

        if(valor > 20 || valor < 10){
            fora++;
        } else {
            dentro++;
        }
    }

    printf("\nQuantidade de valores dentro e fora do intervalo [10,20] sao respectivamente: %f e %f", dentro, fora);
}
