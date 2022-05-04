//Este programa tem como entrada um número inteiro e sua saída é uma frase informando se o número fornecido é par ou
//ímpar.

#include <stdio.h>

int main()
{
	int nro;
	printf("informe um numero");
	scanf("%d",nro);
	if (nro%2 == 0)
	{
	printf("numero eh par");
}
	else{
	
	printf("numero eh impar");
}
	return 0;
}
