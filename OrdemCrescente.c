#include <stdio.h>

int main(){
    
    char vetor[] = {'A','B','C'};
    int i,j,temporaria;

   
    for(i=0; i<3;i++){
	for(j=i+1; j<3;j++){
	     
	    if(vetor[i] > vetor[j]){
	     temporaria = vetor[i];
             vetor[i] = vetor[j];
             vetor[j] = vetor[i];
	     
          }
            	    
     
        }    
    

      }
    for(i=0;i<3;i++){
	for(j=i+1;j<3;j++){
	}
	printf("%c", vetor[i]);
     }
}
