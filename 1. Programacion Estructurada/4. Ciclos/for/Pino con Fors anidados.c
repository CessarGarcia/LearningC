#include <stdio.h>

const int LINEAS = 10;
const char espacio = ' ';
const char por = '*'; 

int main(){
	int f, b, x;
	puts(" ");
	for(f=0; f<LINEAS; f++){
		putchar("\t");
			for(b = LINEAS - f; b>0; b--) putchar(espacio); //putchar imprime una variable de tipo char
				for(x=1; x<2*f; x++) putchar(por);
				puts(" ");
	}
	
	return 0; 
}
