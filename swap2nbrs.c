#include<stdio.h>

int swap2numbers(int, int );

int main(void){
        
	printf("\n");

        int x =2;
	int y =3;
	
	printf("X: %i -- Y: %i", x,y);
	
	printf("\n");	
	
	swap2numbers(x,y);


}

int swap2numbers(int nbr1, int nbr2){

        int temporario = nbr1;
	nbr1=nbr2;
	nbr2=temporario;
       

        printf("X: %i -- Y: %i", nbr1,nbr2);
     


}
