// desenvolver um programa que imprima a tabuada de 0 ate 9.
#include<stdio.h>

int main (){
	int i,j;
	int nr[10][10];
	
	
	for(i=0;i<10;i++){
	    for(j=0;j<10;j++){
    	    nr [i][j]= i*j;
    	}
    }
    printf("\n\n");
    for(i=0;i<10;i++){
    	printf("\nTabuada do %d\n",i);
        for(j=0;j<10;j++){
    	    printf("\n");
        	printf("%d x %d = %d",j,i,nr[j][i]); 
        }
        printf("\n");
	}
	return 0;
}
