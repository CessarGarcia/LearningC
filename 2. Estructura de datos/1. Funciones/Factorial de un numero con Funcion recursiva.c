#include <stdio.h>
long factorial(long numero);

int main(){		//int es el tipo de dato que nos devolvera la funcion main
	int i, numero;
	long factorial;
	printf("Ingresa un numero \n");
	scanf("%i",  &numero);
	
	for(i=0; i<=numero; i++){
		printf("%ld \n", factorial(i));	
	}
	return 0;
}

long factorial(long numero){
	if numero <= 1{
	return 1;
	}else{
		return(numero*factorial(numero-1));
	}
}
