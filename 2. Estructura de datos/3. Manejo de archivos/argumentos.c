#include<stdio.h>
//argc -> cantidad de argumentos
//argv -> vector de argumentos

int main(int argc, char *argv[]){		
	int i;
	for(i=0; i<argc; i++){
			printf("argumento %d: %s\n",i, argv[i]);
	}
	printf("argc = %d \n", argc);
	printf("argv[argc] = %s \n ", argv);
	
	return 0;
}
