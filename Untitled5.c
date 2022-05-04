#include<stdio.h>
int main ( )
{
  int i;
  float a, b, c, media_arit,media_pond;
  printf("Digite um valor inteiro e positivo: ");
  scanf("%d", &i);
/*O programa tem que ler um valor i que seja positivo,ou seja, maior que zero. Por isso, vou colocar um if para mostrar uma mensagem caso o Usuário digite um valor i negativo*/
  if(i<=0) 
   {
     printf(" \t\t Ops! \n Insira um valor inteiro e positivo: ");
    }

  if(i>0) /*Se o Usuário digitar um valor maior que zero, os comandos abaixo serão executados */
    {
       printf("\n Digite o valor de A: ");
       scanf("%f",&a);
       printf(" Digite o valor de B: ");
       scanf("%f",&b);
       printf(" Digite o valor de C: ");
       scanf("%f",&c);
/*Agora que já lemos os valores de i,a,b e c vamos usar um if para saber se i é par e um outro if para saber se i é maior que 10 */
       if((i%2) == 0) /*caso i seja par, calcula-se a média aritmética*/
         {
           media_arit=(a+b+c)/3;
           printf("Media aritmetica: %.2f\n", media_arit);
         }
       else if(i>10)
           {
             media_pond=(2*a + 3*b + 4*c)/9;
             printf("Media ponderada: %.2f\n", media_pond);
           }

    }
 return 0;
}

