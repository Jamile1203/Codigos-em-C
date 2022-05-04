#include<stdio.h>
// Letra C pag 74 livro logica
int main (){
	int A[20],B[20],C[20];
	int i;
	    printf("criando o vetor A: \n");
	for (i=0;i<20;i++){
		printf("digite o valor: \n");
		scanf("%d",&A[i]);
	}
	printf("criando o vetor B: \n");
	for (i=0;i<20;i++){
		printf("digite o valor: \n");
		scanf("%d",&B[i]);
    } 
    printf("criando o vetor C: \n");
	for (i=0;i<20;i++){
		printf("digite o valor: \n");
		scanf("%d",&C[i]);
    }
    printf("imprimindo vetor de A:  \n");
    for (i=0;i<20;i++){
		printf("%d   |   ", A[i]);
	}
	printf("imprimindo vetor de B:  \n");
    for (i=0;i<20;i++){
		printf("%d   |   ", B[i]);
    }
    printf("imprimindo vetor de C:  \n");
    for (i=0;i<20;i++){
		printf("%d   |   ", C[i]);
	}
	return 0;
}
    
    
    
