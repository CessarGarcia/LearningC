#include <stdio.h>
int main(){
	
	int sizeA, i;
	printf("tamaño del arreglo\n");
	scanf("%i", &sizeA);
	int age[sizeA];
	
	for(i=0; i<sizeA; i++){
		printf("Ingresa el valor %i\n", i+1);
		scanf("%i", &age[i]);
	}
	
	printf("Los valores del arreglo son:\n");
	for(i=0; i<sizeA; i++){
		printf("%i\n", age[i]);
	}
	return 0;
}
