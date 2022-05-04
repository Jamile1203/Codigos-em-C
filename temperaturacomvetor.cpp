//crie um programa em C que receba do usuário dez temperaturas em graus Farenheit, transforme-as em graus Celsius e 
//armazene os resultados em um vetor. Terminada a entrada de dados, os valores armazenados devem ser apresentados. 
//Obs.: A fórmula é C = 5/9 (F – 32)

#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");

      float temp [10];
      float contador;
      printf("Digite a temperatura em Farenheit: ");
      for(contador=1;contador<=10;contador++){
      	 scanf("%f",&temp); /*Recebendo os valores das temperaturas*/
	  }

for(contador=1;contador<=10;contador++){
	printf("\n\t Temp [%d] em Graus Celsius = %.1f",contador,(0.55555*(temp-32)));
}
  	
	return 0;
}
