#include<stdio.h>

int main(){
	int a=22, b=7;
	float c; 
	
	c=(float)a/b; //(T.Dato) hace la conversion de la variable
	printf("El resultado de dividir %d entre %d es: %.5f", a,b,c);
	return 0; 
}
