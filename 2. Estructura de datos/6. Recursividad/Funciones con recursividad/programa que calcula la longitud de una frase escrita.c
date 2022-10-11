#include <stdio.h>
int pow(int arg, int exp);
int cuantaCaracteres(char * cadena){
	int i = 0;
	while(cadena[i] != '\0' ){
		i++;
	}
		return i;
}

int main(){
	char cadena[] = "Hola mundo!";
		 
	printf("Longitud de la cadena %d ", cuantaCaracteres(cadena));
	return 0;
}
