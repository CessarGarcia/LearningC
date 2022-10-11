#include <stdio.h>
/*
	NOTAS: 
		Variable globales, se declara antes del main 
		Primero se ejecuta la funcion main y posteriormente las demas funciones
*/
 
 int mostrar_numero(){
 	int var1=8, var2=10, suma; 
 	suma= var1+var2; 
	printf("La suma en la funcion mostar_numero es: %d\n", suma); 
 }
 
int main(){
	//Bloque
	
	int var1=8, var2=15, suma; 
	suma= var1+var2; 
	printf("La suma en la funcion main es: %d\n", suma); 
	
	mostrar_numero();
	return 0;
}

//Variable loca, se declara después del main 
