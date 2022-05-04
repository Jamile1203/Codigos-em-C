// escrever um prog vetor A e vetor B, armazenar vetor A numeros pares e vetor B numeros impares. 
// vetor A e vetor B terá 5 posições e Vetor C mesclar entre par e impar com 10 posicoes.

#include<stdio.h>
void main(void){
	int A[5],B[5],C[10];
	int i=0, indiceA=0, indiceB=0;
	int valor;
	for(i=0;i<10;i++){
		printf("Digite o valor: ");
		scanf("%d",&valor);
		if(valor % 2 == 0 && indiceA <5){
			A[indiceA] = valor;
			indiceA++;
		}
		else if(valor % 2 != 0 && indiceB<5){
			B[indiceB] = valor;
			indiceB++;
		}
		else{
			i--;
		}
	}
	indiceA=0;
	indiceB=0;
	for(i=0;i<10;i=i+2){
		C[i]=B[indiceA];
		C[i+1] = A[indiceA];
		indiceA++;
	}
	for(i=0;i<10;i++){
		printf("a posicao %d do vetor C eh %d\n",i,C[i]);
	}	
}

