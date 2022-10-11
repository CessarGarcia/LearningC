#include<stdio.h>
int main(){
	FILE *fp;
	fp = fopen("C://Users/Universidad/Documents/FCFM/test.txt", "w+"); 	//primero pasa la ruta de donde se abrita el archivo
	fprintf(fp,"Hola mundo");	//w+ menciona lo que hara con el archivo
	fclose(fp);
	printf("Archivo guardado");
}

