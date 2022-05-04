// programa que leia 2 int e coloque um elevado ao outro recursivamente

#include<stdio.h>
void main(void){
	int n1,n2;             //se n1 = 5 e n2 = 3 calcular 5l
	printf("digite a base");
	scanf("%d",&n1);
	printf("Digite o expoente: ");
	scanf("%d",&n2);
	int vlr = pot(n1,n2);
	printf("%d",vlr);
}
int pot(int base, int exp){//5, 3
    int vlr=0;
	if(exp == 0){//caso base
		return vlr = 1;  // base^0 == 1
	}
	vlr = base * pot(base,exp -1);
}
