#include <string.h>
#include <ctype.h>
#include <stdio.h>

int main(void){
	unsigned long length, i=0; 
	char *ptr;
	char str[50];

	
	printf("Ingresa el texto: ");
	fgets(str,50,stdin);	
	length = strlen(str);
	/*si la cadena contiene un salto de linea al final de la cadena, lo remplazamos por el caracter de fin de cadena
	 y decrementamos en 1 el valor de nuestra variable length
	*/
	
	if(str[length-1] == '\n') {
		str[length-1] = '\0';
		length -= 1;
	}
	ptr = str;
	
		while(*ptr) {
		if(i == 0 || i == length-1) {
			if(islower(*(str+i)))
				*(str+i) -= 32; 
		} else if(*(str+i) == ' ') {
			if(islower(*(str+i-1)))
				*(str+i-1) -= 32;
			if(islower(*(str+i+1)))
				*(str+i+1) -= 32; 
		}
		++i;
		ptr++;
	}
	printf("El texto corregido es: %s \n", str);
	
	
	return 0;
}
