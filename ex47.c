#include <stdio.h>

int main() {
	float  x, y, i, resultado;
	printf("\nDigite dois valores em sequencia");
	scanf("\n%f",&x);

	while(i<1){
		scanf("\n%f",&y);
		if(y == 0){
			printf("\n Valor Inválido");
		} else {
			i++;
		}
	}
	resultado = x / y;
	printf("\no resultado da divisão do primeiro valor lido pelo segundo é %f",resultado);
}
