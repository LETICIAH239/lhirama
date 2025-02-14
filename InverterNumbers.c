#include<stdio.h> 

int invertido(int number1);

int QUO, REST, resultado;

int main(void){

	int nbr;
	

	nbr =45;

	QUO = nbr / 10;
	REST = nbr % 10;

	printf("---------------------------------------------");
	printf("\n");

	printf("   1. O numero: %i, tem o primeiro digito: %i e tem segundo digito: %i", nbr, QUO, REST);

	printf("\n");
	printf("-----------------------------------------------\n");

	
	invertido(nbr);
}

	int invertido(int number1){

	printf(" numero invertido: \n");

	resultado = REST * 10 + QUO;

	printf("   2. Resultado: %i ", resultado);
	
	}


