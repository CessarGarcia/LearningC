#include <stdio.h>

int main(){
	int x = 8; 
	int y = x++;  //Postincremento
	printf("El valor de y es: %d", y);
	//y=x -> x=8 -> y=8
	printf("\nEl valor de x es: %d", x); 
	//x++ -> x=8 -> 8+1= 9
	
	y = ++x; //Preincremento
	printf("\n El valor de y es: %d", y);
	//y=++x -> x=8 -> 2+8=10
	return 0; 
}
