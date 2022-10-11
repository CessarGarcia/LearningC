//Programa que utiliza la funcion enum, sirve para enumerar un listado de cosas
#include <stdio.h>

int main(){
	enum personas{
		carlos, maria, jose, ernesto, raul
	}
	p1, p2, p3, p4, p5; 
	
	p1 = carlos;
	p2 = maria;
	p3 = jose;
	p4 = ernesto;
	p5 = raul;
	
	printf("%d", p2); 

	return 0;
	
}
