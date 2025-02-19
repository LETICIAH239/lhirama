#include <stdio.h>

int resultado;

int main(){

int nbr1, nbr2;

printf("Number one: ");
scanf("%i", &nbr1);

printf("Number two:");
scanf("%i", &nbr2);

int soma(int x, int y);

soma(nbr1, nbr2);

        if (resultado >0){

	printf("%i is positive", resultado);

        }
        else{
	
	printf("%i is negative", resultado);
	
	}
}

int soma(int x, int y){
	
	resultado = x+y;
}




