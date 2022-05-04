
#include<stdio.h>
#define TAM 10

void main(void){
	
    int num[TAM];
	int i, aux, contador;
	
	printf("Entre com dez numeros para preencher o array e pressione enter para digitar cada um: \n");
	for(i=0;i<TAM;i++){
		scanf("%d", &num[i]);
	}
	  printf("Ordem atual dos itens no array: \n");
	  	for(i=0; i<TAM;i++){
	  		printf("\t %d", num[i]);
		  }
	
	//Algoritimo de ordenação bubblesort:
	for(contador =1;contador<TAM;contador++){
		for(i=0;i<TAM-1;i++){
			if(num[i] > num[i+1]){
				aux = num[i];
				num[i]= num[i+1];
				num[i+1] = aux;
			}
		}
	}
	
	printf("\n Elementos do array em ordem crescente: \n");
	
	for (i=0; i<TAM;i++){
		printf("\t %d", num[i]);
	}
	printf("\n");
}


