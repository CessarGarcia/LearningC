#include <stdio.h>
#define cantfilas 10		//i filas
#define cantcolumnas 15		//j columnas 

int main (){
	//Declaracion//
	int matrizdeenteros[cantfilas][cantcolumnas];
	int i, j;
	
	//Llenado de la coleccion//
	for(i=0; i<cantfilas; i++){
		for(j=0; j<cantcolumnas; j++){
			printf("Ingrese un valor %i ", i+=1);
			scanf("%d", &matrizdeenteros[i][j]);
		}
	}
	//Despliegue de la columna//
	for(i=0; i<cantfilas; i++){
		for(j=0; j<cantcolumnas; j++){
			printf("[%d]\n", matrizdeenteros[i][j]);
		}
	}
}
