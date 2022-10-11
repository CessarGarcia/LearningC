#include <stdio.h>
int main (){
	char caracter = '9';
	int valor_ascii = (int) caracter;
	if(valor_ascii >= 1 && valor_ascii <= 32){
			printf("El valor %c es un caracter de control", caracter);
	}
	else
		if (valor_ascii >= 33 && valor_ascii <= 47){
			printf("El valor %c es un caracter", caracter);
		}
	else
		if(valor_ascii >= 48 && valor_ascii <= 57){
		printf("El valor %c es numero", caracter);
		}
	else
		if(valor_ascii >= 58 && valor_ascii <= 64){
		printf("El valor %c es un signo", caracter);
		}
	else
		if(valor_ascii >= 65 && valor_ascii <= 90){
		printf("El valor %c es mayuscululas", caracter);
		}
	else
		if(valor_ascii >= 91 && valor_ascii <=96){
		printf("El valor %c es un signo", caracter);
		}
	else
		if(valor_ascii >= 97 && valor_ascii <= 122){
		printf("El valor %c es minuscula", caracter);
		}
	else
		if(valor_ascii >= 123 && valor_ascii <= 127){
		printf("El valor %c es un signo grafico", caracter);
		}
	else
		if(valor_ascii >= 128 && valor_ascii <= 166){
		printf("El valor %c es una letra especial", caracter);
		}
	else
		if (valor_ascii >= 167 && valor_ascii <=254){
		printf("El valor %c es una figura", caracter);
		}
		
	return 0;
}
