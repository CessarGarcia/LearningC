#include <stdio.h>
/*
	Funciones de entrada y salida (printf y Scanf)
	Precio de un producto con iva 
*/

int main(){
	int precio;
	float iva;
	
	printf("Por favor introduce el precio del producto: \n");
	scanf("%d", &precio);
	printf("Introduce la tasa de iva \n");
	scanf("%f", &iva); 
	printf("\n El precion del producto con impuesto es: %.2f \n", precio*(1+iva));
	
	return 0; 
}
