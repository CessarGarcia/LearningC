#include<stdio.h>
	//Numeros pares e impares
int main(){
	int num;
	printf("Ingrese un numero del 1 al 10\n");
	scanf("%d", &num);
	
	switch(num){
		case 1:
		case 3:
		case 5:
		case 7:
		case 9: puts("El numero es impar");
			break;
		
		case 2:
		case 4:
		case 6:
		case 8:
		case 10: puts("El numero es par");
			break;
			
		default: puts("Ingrese un numero del 1 al 10"); 
			break;
	} 
	return 0;
}
