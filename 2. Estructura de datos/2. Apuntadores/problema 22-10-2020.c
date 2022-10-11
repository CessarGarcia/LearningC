#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if(argc>2){
		printf("Hola %s! \n", argv[1]);
		int a = atoi(argv[2]) + 10;
		printf("%d", a);
		
		}else{
			printf("Faltan argumentos");
		}
	return 0;

}

