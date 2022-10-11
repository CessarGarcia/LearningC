#include <stdio.h>
/*
	Definimos varuables globales (VG) y locales (VL)
*/

int edad = 20;  //Variable Global

int main(){
	printf("La edad es: %d\n ", edad);  //20 VG
	{
		int edad = 40; //Variable local
		//Aqui se toma en cuenta la edad de la variable local ya que esta adentro de este bloque
		printf("La edad ahora es: %d", edad); //40 VL
	 } 
	 printf("\n La edad al final es: %d", edad); //20 VG
	 
	 return 0; 
}

