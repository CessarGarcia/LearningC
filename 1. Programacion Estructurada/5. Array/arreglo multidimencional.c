/*	Arreglo Unidimensional
Tipo de dato 	NomArr[indice];      Fila->

	arreglo Bidimensional
Tipo de dato 	NomArr[indice1][indice2];	Matriz

- se puede almacenar datos de tipo entero, caracter, float...
- primero se nombra las filas y luego la columna 
*/

#include<stdio.h>
#include <stdlib.h>

main(){
	int arr[5][6], x=0, y=0;
	
	for(x=0; x<5; x++)
		for(y=0; y<6; y++)
			arr[x][y]=y;
	
	
	for(x=0; x<5; x++)
	{
			for(y=0; y<6; y++)
			printf("%d", arr[x][y]);
			printf("\n");
	}
	//system("Pause");
}
