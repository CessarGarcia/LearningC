#include <stdio.h>

int main(){
	int edad; 
	printf("Ingrese su edad en numero: ");
	scanf("%d", &edad); 
	 
	if(edad>=18 && edad<100){
		printf("\n La persona es mayor de edad "); 
	}
	
	if(edad<=0)
		puts("\n Ingrese una edad correcta ");
		
	if(edad>=1 && edad<18)
		puts("\n La persona es menor de edad "); 
		//Se puede hacer uso de puts sino se necesita concatenar una variable
		//Cuando la condicional es una sola operacion, no es necesaria colocar llaves
	return 0;
}
