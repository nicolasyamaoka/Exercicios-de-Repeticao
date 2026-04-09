#include <stdio.h>

int main() {
    float media, total;
    int i; 

    for(i = 15 ; i <= 100; i++){
        total = total + i;
    }
    media = total / 86;
    printf("\na media dos numeros inteiros entre 15(incluso) e 100(incluso) é %f", media);   
}
