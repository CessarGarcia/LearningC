#include <stdio.h>
	//Operador de coma
	
int main(){
	int y=10, x;
	x = (y=6, y+10); //y vale 6 y la otra condicion es que y"6"+10 = 16
	printf("El valor de x es: %d", x);  
	
	x = (y=18, y+=2, y/4);
	   // y=18, y=y"18"+2 = 20, 20/4=5 
	printf("\n El 2do resultado es: %d", x); 
	return 0;
}
