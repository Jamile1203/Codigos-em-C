#include <stdio.h>

int main(){
  while(true){
  
	float valor =0;
	int internac;
	printf("\nDigite o valor do produto: ");
	scanf("%f",&valor);
	if(valor < 0){
		break;
	}
	printf("eh internacional? 1 (sim) 0 (nao): ");
	scanf("%d",&internac);
	
	float frete = 0;
	
	if(internac == 0){
		if(valor <75.00){
			frete = valor * 0.1;
		}
	}
	else{
			
		if (valor < 333.33){
			frete = valor * 0.15;
		}
		else{
			frete = 50.0;
		}
	}
	printf("O valor do frete sera de R$ %.2f",frete);
	
  }
  printf("o Break foi acionado!!!!");
}
