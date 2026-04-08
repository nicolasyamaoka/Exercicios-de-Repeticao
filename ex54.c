#include <stdio.h>

int main() {
	float  n, i;
    do{
        printf("Escreva um numero");
        scanf("%f",&n);
        } while(n<0);


	for(i=1 ; i<=n ; i++){
    printf("\n%f", i);
    }
}
