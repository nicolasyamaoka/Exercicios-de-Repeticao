#include <stdio.h>

int main() {
	float  nota1, nota2, media, i;

	for(i=0 ; i<1 ; i++){

	printf("\nDigite dois valores de nota de um aluno para eu calcular a media");
	scanf("%f",&nota1);
	scanf("\n%f",&nota2);

	if(nota1 > 10  || nota1 < 0 || nota2 > 10 || nota2 < 0) {
		i = i - 1;
		printf("\nValor Invalido");} 
	}
	media = (nota1 + nota2) / 2;
	printf("\no resultado da média e: %f",media);
}