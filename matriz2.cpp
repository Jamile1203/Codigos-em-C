#include<stdio.h>
// Letra B pag 74 livro logica
int main (){
	int i;
	int B[8],A[8];
	    printf("criando o vetor A: \n");
	for (i=0;i<8;i++){
		printf("digite o valor: \n");
		scanf("%d",&A[i]);
    }
    //criando o vetor B
    for (i=0;i<8;i++){
		B[i]=A[i]*3;
    }
        printf("Exibindo o vetor B \n");
        for (i=0;i<8;i++){
		printf("%d  | ", B[i]);
    }
    
    return 0;
}
   
