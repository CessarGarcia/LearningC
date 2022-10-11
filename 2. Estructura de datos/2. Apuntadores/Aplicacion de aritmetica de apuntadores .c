#include <stdio.h>
int main(){
	float matriz[2][3];
	float * apMatriz = matriz[0];
	printf("Aplicacion de aritmetica de apuntadores \n");
	int i;
	for (i=0; i<sizeof(matriz)/sizeof(float); i++){
		printf("\n Digite el dato %d de la matriz: ", i+1);
		scanf("%f", apMatriz);
		apMatriz ++;
	}
	printf("\n\n");
	apMatriz = matriz[0];
	for (i=0; i<sizeof(matriz)/sizeof(float); i++){
		printf("\n Dato %d: %.3f\n", i+1, *apMatriz);
	
		apMatriz ++;
	}	
		
	
	return 0;
}
