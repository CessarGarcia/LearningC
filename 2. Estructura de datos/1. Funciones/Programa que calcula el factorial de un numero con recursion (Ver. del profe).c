#include <stdio.h>
#include <stdlib.h>

int cache[1000];
int contador = 0;
int contador_cache =0;
int factorial_cache(int numero) {

}
int factorial(int numero) {
	contador ++;
	if(numero <= 1) {
		return 1;
	} else {
		return numero * factorial(numero-1);
	}
}

int main(int numero_de_argumentos, char **valores) {
	int i;
	int posicion_a_calcular =0;
	for(i= 1; i< numero_de_argumentos; i++) {
		posicion_a_calcular = atoi(valores[i]);
		printf("n: %d\t f: %d\n", posicion_a_calcular, factorial(posicion_a_calcular));
	}
	printf("La funcion factorial fue llamada %d", contador);
	return 0;
}

