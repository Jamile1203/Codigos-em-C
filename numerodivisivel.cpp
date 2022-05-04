//Desenvolver um algoritmo que leia um número inteiro e verifique se o número é divisível por 5 e por 3 ao mesmo tempo.
#include<stdio.h>

int main(){
	
	int nr;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &nr);
	
	if(nr%5==0 && nr%3==0){
		printf("Este numero eh divisivel");
	}
	else{
		printf("Este numero nao eh divisivel");
	}
	
	return 0;
}
