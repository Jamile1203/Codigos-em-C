#include <stdio.h>
// programa que leia 5 numeros inteiros positivos e informe seus divisores, exceto o próprio número.  Após isso, 
// mostrar quais números são perfeitos e para esses, informar também o seu quadrado.
// Exemplo: Para o valor 8: 1+2+4 = 7  não é perfeito
// 6 = 1 + 2 + 3 número perfeito, logo deve informar 36 também
void main(void){
	int nr,i;
	for(i=0;i<5;i++){
		printf("Digite o %dª numero: ", i+1);
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
		perfeito += j // pega os divisores e ver se é perfeito
		
		
	}
	}
	if(perfeito == nr){ // se os perfeitos forem igual ao nr 
		printf("%d eh um numero perfeito \n", nr);
		printf("e seu quadrado eh %d\n", nr * nr);
	}
return 0;
}
