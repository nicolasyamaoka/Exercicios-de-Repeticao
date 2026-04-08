#include <stdio.h>

int main() {
    float i, negativos = 0 , valor;

    for(i = 1; i <= 10; i++){
        printf("Digite um valor: ");
        scanf("%f", &valor);

        if(valor < 0){
            negativos++;
        }
    }

    printf("\nQuantidade de valores negativos: %d", negativos);
}
