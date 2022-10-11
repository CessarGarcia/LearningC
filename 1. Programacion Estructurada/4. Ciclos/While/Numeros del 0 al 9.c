#include<stdio.h>

int main(){
	int i=0; 
	//Se suele utilizar la variable "i" por la inicial de "interacion"
	
	while(i<10){
		//Este ciclo comienza valiendo 0 y se aumenta en i con i++ hasta que llega menor a 10 
		printf("El numero es: %d\n", i);//Imprime hasta el numero 9
		i++; //a i se le aumenta 1 hasta que llegue a valer 9  
	}
	printf("\n Nuestro iterador tiene %d numeros",i); 
	return 0; 
}
