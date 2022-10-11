#include<stdio.h>
int suma();

int main(){
	printf("%i\n", suma());
	return 0;
}

int suma(){
		int suma, num1, num2;
	printf("Ingrese el numero 1 ");
	scanf("%d", &num1);
	printf("Ingrese el numero 2 ");
	scanf("%d", &num2);
	suma = num1 + num2;
	
	printf("El resultado es: %d", suma);
	//return suma;
}
