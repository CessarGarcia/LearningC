#include <stdio.h>
#include <string.h>
#include <ctype.h>

char cadena[' '][' '], cadena_mayor[' '];
int n, i, j, palabras [' '], tamano, mayor;
int main(){
	do{
		printf("\n Cuantas cadenas desea agregar: ");
		scanf("%d", &n); 
	}while(n<=0);
	for(i=0; i<n; i++){
		printf("Ingrese su texto %d:  ", i+1);
		fflush(stdin);
		gets(cadena[i]);
		tamano=strlen(cadena[i]);
		for(j=0; j<tamano; j++){
			if(isalpha(cadena[i][j])){
			palabras[i]++;
			while(cadena[i][j]!=32){
			j++;
			}
		}
	}
}
strcpy(cadena_mayor, cadena[0]);
mayor = palabras[0];
for(i=0; i<n; i++){
	if(palabras[i] > mayor){
		strcpy(cadena_mayor, cadena[i]);
		mayor=palabras[i];
	}
}
printf("\n La cadena mayor es: %s", cadena_mayor);
printf("\n La cual tiene %d palabras", mayor);
return 0;

}
