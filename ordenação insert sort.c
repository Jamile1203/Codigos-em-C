// ordenação insertion sort
#include<stdio.h>
#define TAM 6

void main(void){
	
    int v[TAM];
	int i, j, aux;
	for(i=2;i<TAM;i++){
		printf("digite seis numeros aleatorios:");
		scanf("%d", &v[i]);
	}
	
	for(i=2;i<TAM;i++){
		aux = v[i];
		j = i-1;
		
		while((j>=0) && (aux < v[i])){
			v[j+1] =  v[j];
			j--;
		}
		v[j+1] = aux;
	}
		for(i=2;i<TAM;i++){
	    printf("\t %d", v[i]);
}
}
