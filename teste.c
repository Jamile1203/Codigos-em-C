#include<stdio.h>

int main(){
	
	int vetor[] = {29, 35, 12, 0, 28, 34,11,1, 30, 36, 13};
	int menor = vet[i];
	int i,j,vet;
	int pos = i;
	
	
	for(i=0;i<11;i++){
		for(j=i;j<11;i++){
			if(menor > vet[j]){
					menor = vet[j];
					pos =j;
		}
	}
vet[pos]=vet[i];
vet[i]=menor;
}



for(i=0;i<11;i++){
		printf("numero %d eh: %d\n ", i, vet[i]);
	}
	
	return 0;
}
