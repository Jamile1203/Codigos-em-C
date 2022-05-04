#include<stdio.h>

int main(){
	struct parque {
	int capacidade;
	int qtd;
	float altmax;
	float altmin;	
	};
	
	struct parque diario;
		    printf("Digite a capacidade de hoje: ");
		scanf("%d", &diario.capacidade);
		    printf("Digite a altura maxima das pessoas: ");
		scanf("%f", &diario.altmax);
			printf("Digite a altura minima das pessoas: ");
		scanf("%f", &diario.altmin);
		
		printf("\n Bem vindo ao Parque, se divirta!");
	
	while(1==1){
		float altura;
		printf("\n Digite a altura: ");
		scanf("%f", &altura);
		if(altura >= diario.altmin && altura <= diario.altmax){
			printf("Entrada Permitida");
			diario.qtd++;
		}
		else{
			printf("Entrada nao permitida");
		}
		
		if(diario.qtd == diario.capacidade){
			printf("\n Capacidade alcançada, hora de fechar!!! ");
			break;
		}
	}
	printf("FIM!!!");
	
	return 0;
}
