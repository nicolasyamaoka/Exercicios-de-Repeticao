#include <stdio.h>

int main() {
	float  x, y, i, resultado;
	printf("\nDigite dois valores em sequencia");
	scanf("\n%f",&x);

	do{
		scanf("\n%f",&y);
		if(y == 0){
			printf("\n digite um valor diferente de 0");
		} else {
			i++;
		} while(i<1)
	}
	resultado = x / y;
	printf("\no resultado da divisão do primeiro valor lido pelo segundo é %f",resultado);
}
