#include <stdio.h>

int main() {
    float valorCada, valorTotal, media;
    int n = 1; 
    char status = 'S';

    while(status == 'S'){
        printf("Qual e o valor da mercadoria %d: ", n);
        scanf("%f",&valorCada);
        valorTotal = valorTotal + valorCada;

        do{
            printf("\nMAIS MERCADORIAS (S/N)?: ");
            scanf(" %c",&status);  

            if(status != 'S' && status != 'N'){
                printf("\nValor Indefinido");}
            else if(status == 'S'){
                n++;
            }
        } while(status != 'S' && status != 'N');

    }

    media = valorTotal / n;
    printf("\no valor total e %f e a media do valor das mercadorias e %f", valorTotal, media);   
}
