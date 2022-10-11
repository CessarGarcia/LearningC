#include <stdio.h>

int main(){
	 int a;												//Podemos o no asignar un valor a la variale desde su declaracion 
	 printf("Ingrese un numero: ");					//No podemos usar variables sin antes declararlas con su tipo de dato 
	 scanf("%d", &a); 									//Se utiliza el %d por ser un int, y & nos dice en que variable se almacenará
	 printf("\n El valor almacenado es: %d", a); 		//Printf es una impresion por consola, usando %d para indicar la varianle de tipo entero y la variable que lo tiene almacenada
	 
	 return 0;
}
