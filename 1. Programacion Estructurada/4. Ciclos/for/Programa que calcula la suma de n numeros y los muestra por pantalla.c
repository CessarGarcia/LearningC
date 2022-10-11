#include <stdio.h>
#define num 8

//Programa que calcula la suma de n numeros y los muestra por pantalla 

int main(){
	int nums[num];
	int  i, total=0;
	
	for(i=0; i<num; i++){
		printf("Por favor introduzca el numero: ");
		scanf("%d", &nums[i]);
	}
	
	//Imprimira la lista de los numeros
	printf("\n Listas de numeros:\n");
	for(i=0; i<num; i++){
		printf("%d\n", nums[i]);
		total+= nums[i];
	}
	
	printf("\n La suma de los numeros es: %d", total);
	
	return 0;
	
}
