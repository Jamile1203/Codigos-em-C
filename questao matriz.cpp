#include<stdio.h>
/// Ler 10 elementos de uma matriz tipo vetor e apresenta-los. 
int main (){
	int i;
	int vetor[10];
	    printf("criando o vetor: \n");

	for (i=0;i<10;i++){
		printf("digite o valor: \n");
		scanf("%d",&vetor[i]);
		
	}
	    printf("exibindo o vetor:  \n");
	for (i=0;i<10;i++){ 
	    printf("%d",vetor[i]);
    }
	
	return 0;
}
