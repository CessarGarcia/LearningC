#include <stdio.h>
	//sizeof: consigue el tamaño de una variable y nos muestra su longitud en byte
int main(){
	int a;
	float b;
	double c;
	short int d; 
	long e; 
	char f;
	long double g; 
	
	printf("La longitud en byte de int es: %d\n", sizeof(a)); 
	printf("La longitud en byte de float es: %d\n", sizeof(b)); 
	printf("La longitud en byte de double es: %d\n", sizeof(c)); 
	printf("La longitud en byte de short int es: %d\n", sizeof(d)); 
	printf("La longitud en byte de long es: %d\n", sizeof(e)); 
	printf("La longitud en byte de char es: %d\n", sizeof(f)); 
	printf("La longitud en byte de long doble es: %d\n", sizeof(g)); 
	return 0;
}
