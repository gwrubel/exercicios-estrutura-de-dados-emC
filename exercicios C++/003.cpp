/*Fazer um algoritmo que defina um vetor com 30 posições e preencha as
15 primeiras posições com V o restante com F.*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main (){
	unsigned vetor[30];
	int i ;
		for(i=0;i<30;i++){
			if (i<=14){
				vetor[i]=0;
				
			}	
			else{
				vetor[i]=1;
				
			}
			if(vetor[i]==0){
				printf("V");
				
			}
			else{
					printf("F");
				}
		}
		
}
