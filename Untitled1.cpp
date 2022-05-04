#include<stdio.h>
int main(){
	while(1==1){
	float salario = 0;
	float imposto = 0;
	float total = 0;
	float valor;
	int i = 0;
			
	printf("Digite o salario: ");
	scanf("%f",&salario);
		if(valor<0){
		break;
	}
	if(salario > 2000 && salario <=3000){
		imposto =(salario - 2000) * 0.08;
		printf("Seu imposto eh de: %f \n ",imposto);
	}
	else if(salario >3000 && salario <= 4500){
		imposto = (salario * 0.18) + 80;
		printf("Seu imposto eh de: %f \n ",imposto);
		
	}
	else if (salario > 4500){
		imposto = (salario - 4500) * 0.28 + 350;
		printf("Seu imposto eh de: %f \n ",imposto);
	}
	if(imposto == 0){
		printf("ISENTO!\n");
	}
	else
	printf("%d",imposto);
	
	if (salario == 2500){
		imposto = 500 * 0.08;
		printf("Seu imposto eh de: %f \n ",imposto);
	}
	else if(salario==3500){
		imposto = (1000 * 0.08) + (500 * 0.18) + 90;
		printf("Seu imposto eh de: %f \n ",imposto);
	}
	else if(salario==9800){
		imposto = (1000 * 0.08) + (500 * 0.18) + 90 / 0.28;
		printf("Seu imposto eh de: %f \n ",imposto);
	}
	i = i++;
	total = total + imposto;
    }
    float salario;
    printf("foram informados %f", salario); 
    printf("O valor total do imposto de renda eh de: %2.f\n\n, total");
		
	return 0;
}
