#include <stdio.h>

int main() {
    float quantidade, valorCada, valorTotal, media;
    int i; 

    printf("Qual e o numero total de mercadorias: ");
    scanf("%f",&quantidade);

    for(i = 1 ; i <= quantidade; i++){
        printf("Qual e o valor da mercadoria %d: ", i);
        scanf("%f",&valorCada);
        valorTotal = valorTotal + valorCada;
    }
    media = valorTotal / quantidade;
    printf("%d", i);
    printf("\no valor total e %f e a media do valor das mercadorias e %f", valorTotal, media);   
}
