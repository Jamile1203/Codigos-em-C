// programa que leia 2 int e coloque um elevado ao outro recursivamente

#include<stdio.h>

void main (void){
	int n1,n2;
	printf("digite a base");
	scanf("%d", &n1);
	printf("digite o expoente:");
	scanf("%d",&n2);
	int valor = pot(n1,n2);
	print("%d", vlr);
	
}

int pot(int base, int exp){
	int vlr = 0;
	if (exp == 0){
		return vlr = 1; // pq base^0 ==1
	}
	vlr = base * pot(base,exp -1);
}
