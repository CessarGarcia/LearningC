#include <stdio.h>
int main(){
	int arreglo[6] = {1, -2, 0, 3, -5, 2};
	int *apuntador = arreglo;
	
	apuntador++;
	printf("Contenido de la direccion de memoria apuntada por apuntador: %d", *apuntador);
	apuntador+=4;
	printf("\n Contenido de la direccion de memoria apuntada por apuntador: %d", *apuntador);
	apuntador-=5;
	printf("\n Contenido de la direccion de memoria apuntada por apuntador: %d", *apuntador);
	printf("\n\n");
	return 0;
}
