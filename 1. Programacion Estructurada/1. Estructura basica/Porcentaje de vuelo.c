#include<stdio.h>

int minu;
float porciento=0;

int main()
{
	printf("Ingrese el tiempo de vuelo: ");
	scanf("%d",&minu);
	   porciento = (float) minu*100/120;
	  printf ("El porcentaje de avance es: %.3f",porciento);
	    
	
return 0; 
}