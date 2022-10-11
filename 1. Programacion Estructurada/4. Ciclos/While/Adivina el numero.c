#include <stdio.h>

int main(){
	int n=10, num;
	
	printf("Adivina el numero que estoy pensando \n");
	while (scanf("%d", &num)){
		if(num==n) break;
		//Podemos hacer esto sin necesidad de colocar el else, pero no nos va a dejar colocar un mensaje si el numero es el correcto dentro del ciclo
		printf("Error, Adivina el numero que estoy pensando \n"); 
	}
		
		puts("El numero es el correcto"); //El mensaje alerta correcto se coloca afuera del bucle
	return 0; 
}
