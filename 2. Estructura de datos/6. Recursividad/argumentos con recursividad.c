#include <stdio.h>
int i;
int main(int numero_de_argumentos, char **valores_de_los_argumentos){
	
	
	printf("hola a\n");
	for(i=1; i<numero_de_argumentos; i++){
		printf("%s\n", valores_de_los_argumentos[i]);
	}
	
	return 0;
}


