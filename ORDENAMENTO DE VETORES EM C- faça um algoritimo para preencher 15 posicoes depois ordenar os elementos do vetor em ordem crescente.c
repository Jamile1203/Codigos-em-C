/// ORDENAMENTO DE VETORES EM C.
/// FAÇA UM ALGORITIMO PARA PREENCHER UM VETOR DE 15 POSIÇÕES DEPOIS ORDENAR OS ELEMENTOS DESSE VETOR EM ORDEM CRESCENTE 
//// E MOSTRAR O VETOR

// aux := num1;
// num1 := num2;
// num2 := aux;

#include<stdio.h>;

int main(){
	
	int vetor[15];
	int aux,i;
	int x,y;
	
	for(i=0;i<15;i++){
		printf("Digite o numero %d do vetor: ", i);
		scanf("%d", &vetor[i]);
	}
	for(x=0;x<15;x++){
		for(y=x;y<15;y++){
				if(vetor[x]>vetor[y]){
					aux = vetor[x];
					vetor[x] = vetor[y];
					vetor[y] = aux;
			}
				}
		}
	
	for(i=0;i<15;i++){
		printf("numero %d eh: %d\n ", i, vetor[i]);
	}
	
	return 0;
}
