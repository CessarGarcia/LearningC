/*Calcular el mayor de 2 numeros*/
#include<stdio.h>
//Prototipo de funcion
int mayor(int num1, int num2);

int main(){
	int num1, num2, nmayor;
	printf("Ingrese un numero: ");
	scanf("%d", &num1);
	printf("Ingrese otro numero: ");
	scanf("%d", &num2);
	
	
	printf("El numero mayor es %d", mayor(num1, num2));
	return 0;
}

//Definicion de funcion
int mayor(int num1, int num2){
	int numMayor;
	if(num1>num2){
		numMayor = num1;
	}
	else{
		numMayor = num2;
	}
	return numMayor;
}
