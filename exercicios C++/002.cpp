 /*Fa�a um algoritmo que leia dois valores (limite inferior e limite superior) e
mostre todos os n�meros pares e impares do intervalo, como suas somas e m�dias. Caso
o limite inferior seja maior que o superior o sistema dever� mostrar as mesmas
informa��es. Dica um la�o para positivo e outro para negativo.*/

 #include <stdio.h>
 #include <stdlib.h>
 #include <conio.h>
 #include <math.h>
     
   
 int main (){
	int n1 = 0, n2 = 0, qtdImpar = 0, qtdPar = 0;
	int somaPar = 0,somaImpar = 0;
 	float mediaPar=0,mediaImpar=0;
  
 		printf("Digite o primeiro valor:\n");
 			scanf("%i",&n1);
			     
 		printf("Digite o segundo valor:\n");
 			scanf("%i",&n2);
  
 		if(n1 < n2){
 			
 			while(n1<=n2){
 				
 				if(n1%2==0){
 					somaPar = (somaPar + n1);
 					qtdPar = (qtdPar + 1);
 					printf("%i e par\n",n1);
 					
				}
				else {
 					somaImpar = (somaImpar + n1);
 					qtdImpar = (qtdImpar + 1);
 					printf("%i e impar\n",n1);
 				}
 				n1++;
 			}
		} else {
			
 			while(n1>=n2){
 				if(n1%2==0){
 					somaPar = (somaPar + n1);
 					qtdPar = (qtdPar + 1);
 					printf("%i e par\n",n1);
 				}
				else {
 					somaImpar = (somaImpar + n1);
 					qtdImpar = (qtdImpar + 1);
 					printf("%i e impar\n",n1);
 				}
				n1--;
  			}
  		}
		 mediaPar = (somaPar/qtdPar);
		 mediaImpar = (somaImpar/qtdImpar);
		 printf ("A soma dos pares e: %i\n",somaPar);
		 printf("A soma dos impares e: %i\n",somaImpar);
		 printf("a media de pares e:%2.f\n",mediaPar);
		 printf("a media de impares e:%2.f\n",mediaImpar); 
 }
