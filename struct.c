//fazer um programa que leia o nome a idade e o enderço de uma pessoa 
//e armazene em uma estrutura. Depois mostre na tela todos os dados armazenados

#include<stdio.h>
#include<stdlib.h>

void main(void)	{
	
	struct endereco{
	char rua[10];
	int cep;
	int numero;
	
}end;

struct{
	char nome[10];
	int idade;
	struct endereco end;
	
}dados;

printf("Digite o nome da rua: ");
fflush(stdin);
gets(end.rua);
printf("Digite o numero da casa: ");
scanf("%d", &end.numero);
printf("Digite o cep da casa: ");
scanf("%d", &end.cep);

printf("Digite o nome da pessoa: ");
fflush(stdin);
gets(dados.nome);
printf("Digite a idade da pessoa : ");
scanf("%d", &dados.idade);
dados.end = end;

printf("Os dados digitados foram: \n\n :");
printf("\n O nome da pessoa: %s", dados.nome);
printf("\n A idade da pessoa: %d", dados.idade);
printf("\n O nome da rua: %s", dados.end.rua);
printf("\n O numero da casa: %d", dados.end.numero);
printf("\n O cep da rua: %d", dados.end.cep);

}





 

		
		
	
	
	

