#include <stdio.h>
int main(){
	int puntero;
	int my_variable =4;
	
	puntero = &my_variable;
	printf("Valor de mi puntero\n");
	printf("%d \n", *puntero);
	printf("direccion de mi puntero\n");
	printf("%d \n", puntero);
	my_variable++;
	printf("valor de mi puntero despues de modificar mi variable \n");
	printf("%d", *puntero);
	
	/* con estrellida es el valor de la referencia y 
	sin la estrella es la referencia o direccion en memoria
	*/
}
