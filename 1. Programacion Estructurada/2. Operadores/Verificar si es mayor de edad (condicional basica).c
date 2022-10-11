#include <stdio.h>
	//Operador condicional 
	//Verificar que sea mayor de edad 
int main(){
	int edad=17, condicional;
	
	condicional = (edad>=18)? 1 : 0;
	//Se imprime 1 si la condicion es verdadera, sino 0 falso
	printf("La persona es mayor de edad?: %d", condicional); 
	
	return 0;	
}
