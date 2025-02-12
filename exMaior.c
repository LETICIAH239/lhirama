#include <stdio.h>

int main(){

int  number1, number2;

       printf("Digitar o primeiro numero: \n ");
       scanf(" %d", &number1);

      printf("Digitar o segundo numero: \n");
      scanf(" %d", &number2);



        if(number1 == number2){
 
	    printf("Os numeros sao iguais \n");
        }
        else{

	   if(number1 > number2) {
		    
		    printf("O maior numero e: %d ", number1);
	   }
		   else{
		    printf("O maior numero e: %d", number2);

		   }
	    
	}
}

