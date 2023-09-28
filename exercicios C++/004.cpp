/*Elabore um algoritmo que leia um vetor com 100 números inteiros e
some os valores das posições impares.*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main (){
	int n[100];
	int soma, i;
		for (i=0;i<100;i++){
			printf("digite o numero: \n");
				scanf("%i",&n[i]);
		
		}
		for(i=0;i<100;i++){
			if((i%2)!=0){
				soma += n[i];
				printf("posicao impar:%i | numero: %i \n",i,n[i]);
			}
		
	}
	printf("a soma dos numeros do vetor de posicao impar e: %i",soma);
}
