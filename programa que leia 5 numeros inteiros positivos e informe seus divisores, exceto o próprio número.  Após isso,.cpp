#include <stdio.h>
// programa que leia 5 numeros inteiros positivos e informe seus divisores, exceto o pr�prio n�mero.  Ap�s isso, 
// mostrar quais n�meros s�o perfeitos e para esses, informar tamb�m o seu quadrado.
// Exemplo: Para o valor 8: 1+2+4 = 7  n�o � perfeito
// 6 = 1 + 2 + 3 n�mero perfeito, logo deve informar 36 tamb�m
void main(void){
	int nr,i;
	for(i=0;i<5;i++){
		printf("Digite o %d� numero: ", i+1);
		scanf("%d", &nr);
		calculadivisor(nr);
	}
	
}
void calculadivisor(int nr){
	int j;
	int perfeito = 0;
	for(j=1;j<5;j++){
	if(nr % j == 0){
		printf("Os dividores de %d eh: \n\n", j);
		perfeito += j // pega os divisores e ver se � perfeito
		
		
	}
	}
	if(perfeito == nr){ // se os perfeitos forem igual ao nr 
		printf("%d eh um numero perfeito \n", nr);
		printf("e seu quadrado eh %d\n", nr * nr);
	}
return 0;
}
