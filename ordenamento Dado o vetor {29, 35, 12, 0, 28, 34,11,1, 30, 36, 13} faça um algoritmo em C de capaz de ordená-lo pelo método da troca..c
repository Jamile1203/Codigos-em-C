//Dado o vetor {29, 35, 12, 0, 28, 34,11,1, 30, 36, 13} faça um algoritmo em C de capaz de ordená-lo pelo método da troca.

#include<stdio.h>

void main(void){
	
	int vetor[] = {29, 35, 12, 0, 28, 34,11,1, 30, 36, 13};
	int x,y;
	int aux,i;
	
	for(x=0;x<11;x++){
		for(y=x;y<11;y++){
				if(vetor[x]>vetor[y]){
					aux = vetor[x];
					vetor[x] = vetor[y];
					vetor[y] = aux;
			}
				}
		}
	
	for(i=0;i<11;i++){
		printf("O numero da posicao %d eh: %d\n ", i, vetor[i]);
	}
	

}

