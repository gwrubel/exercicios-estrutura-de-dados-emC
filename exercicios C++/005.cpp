/*Fazer um algoritmo que leia a nota de 15 alunos, calcule a m�dia entre
elas e imprima a diferen�a entre cada nota e a m�dia.*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	 float nota [15], dif[15], media = 0;
	 float soma = 0;
	 int i = 0;
	 	
	 	for(i = 0;i<15;i++){
	 		printf("Digite a nota do %i aluno:\n",i+1);
	 			scanf("%f",&nota[i]);
	 				soma += nota[i];
		 }
		 	media = (soma / i);
		
		for (i =0;i<15;i++){
		 	dif[i]= nota[i] - media;
		 	
			 }
		 	printf("A media da turma e: %.2f\n",media);
		 	printf("A diferen�a entre as notas:\n");
		 	for(i=0;i<15;i++){
		 		printf("%.2f\n",dif[i]);
			 }
		 	
}
