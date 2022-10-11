#include <stdio.h>
/*
	! Negacion 
	&& And
	|| Or 
*/ 
int main(){
	int a=10, b=10, c; //Recordamos que se puede o no iniciar variables desde su declaracion
	
	c= (a==b) && (a>5);
	printf("La expresion es: %d\n", c);  //true
	//El resultado es 0 si es false
	//El resultado es 1 si es true
	
	return 0; 
}
