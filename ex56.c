#include <stdio.h>

int main() {
	float  a, n, i;

    while(a > 10 || a < 1){
        printf("\nEscreva um número entre 1 e 10");
        scanf("%f", &a);
        if(a > 10 || a < 0){
            printf("Valor Inválido");
        } else{
            for(i=1 ; i<=10 ; i++){
                 n = i * a;
                printf("\n %f X %f = %f", a, i, n);
            }
        }

    }
}
