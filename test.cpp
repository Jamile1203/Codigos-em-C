#include<stdio.h>
/// Ler uma matriz A do tipo vetor com 15 elementos. Construir uma matriz B do mesmo tipo, sendo que cada elemento da matriz  
/// seja o fatorial do elemento correspondente a matriz A. Apresentar as matrizes A e B

int main(){
	
	int B[15],A[15],i,fat,vet;
	
	for (i=0;i<15;i++){
		printf("digite o valor: \n");
		scanf("%d",&A[i]);
	}
	for (i = 0; i < 15; i++) {
    for (fat[i] = 1; vet[i] > 1; vet[i]--) {
        fat[i] *= vet[i];
    }
    {
        printf ("\n\n");
    }
    printf("%d", B[i]);
}   
   return 0;
}

    
