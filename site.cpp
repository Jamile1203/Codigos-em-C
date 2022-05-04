 //Ex 3 Fatorial
 #include <stdio.h>

int main (){

int fat[12],i,vet[12];

for (i=0; i<12; i++)
{
printf("Digite um numero:\n");
scanf ("%d",&vet[i]);
}

for (i = 0; i < 12; i++) {
    for (fat[i] = 1; vet[i] > 1; vet[i]--) {
        fat[i] *= vet[i];
    }
    {
        printf ("\n\n");
    }
    printf("%d", fat[i]);
}   

return 0;
}
