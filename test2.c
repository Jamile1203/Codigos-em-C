void main(void){
	int vet[] = {29,28,12,30,35,34,11,1,0,36,13};
	int i;
	printf("\n O vetor ordenado eh: \n");
	int pos;
	int j;
	int menor;
	for(i=0; i<11; i++){ 
		menor = vet[i];
		for(j=i; j<11; j++){
			if(menor > vet[j]){
					menor = vet[j];
					pos = j;
			}	
		}
		vet[pos] = vet[i];
		vet[i] = menor;
}
	for(i=0; i<11; i++){
		printf("%d|",vet[i]);
	}
}
