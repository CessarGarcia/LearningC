//Arreglo de estructuras para almacenar los datos de los perros de una perrera

#include <stdio.h>
struct perro{
	char nombre[30];
	int edadmeses;
	float peso;
}perros[3];

int main(){
	int i;
	for(i=0; i<3; i++){
		printf("Ingresa el nombre del perro %i: ", i+1);
		scanf("%s", &perros[i].nombre);
		printf("Ingresa la edad del perro %i: ", i+1);
		scanf("%i", &perros[i].edadmeses);
		printf("Ingrese el peso del perro %i: ", i+1);
		scanf("%f", &perros[i].peso);
		printf("\n");
	}
		printf("\n\n");
	for(i=0; i<3; ++i){
	
		printf("El nombre del perro %i es: %s\n",i+1, perros[i].nombre);
		printf("La edad del perro %i es: %i\n", i+1, perros[i].edadmeses);
		printf("El peso del perro %i es: %.2f\n", i+1, perros[i].peso);
		printf("\n");
	}
	return 0;
}
