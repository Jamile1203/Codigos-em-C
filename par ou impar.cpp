//Este programa tem como entrada um n�mero inteiro e sua sa�da � uma frase informando se o n�mero fornecido � par ou
//�mpar.

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
