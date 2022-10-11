#include<stdio.h>
#include<stdlib.h>
int fun_cuadrilatero(int *largo, int*alto){
	char carac = '*', carac2 = '-', carac3 = '+';
	int fila,colu;
	for(fila = 1; fila <=(*largo); fila+=1)
	{
		for (colu = 1; colu <=(*alto) ; colu= colu+1){
		if (fila == 1 || fila == *largo){
			if(fila==1 && colu ==1 || fila == 1 && colu ==*largo || colu ==1 || fila == *alto && colu ==*alto||fila==1&&colu==1)
			{
				printf("%c", carac3);
			}else {
				printf("%c", carac2);
			}
		}else{
			if(colu == 1 || colu == *alto)
			{
				printf("%c", carac);
			}else{
				printf(" ");
			}
		}
		}  printf ("\n");	
	
}
}
int main (int argc, char **argv){
  int fila, colu;
  fila=atoi(argv[1]);
  colu=atoi(argv[2]);
   fun_cuadrilatero(&fila,&colu);

			
		return 0;
}
