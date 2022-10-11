#include<stdio.h>
#include<stdlib.h>
int Cuadrado(int *larg, int*alt){
	char F1='*', F2='-', F3='+';
	// Fila(x) Columna (y) (Para hacer el codigo mas corto
	// F1, F2, F3 corresponden a la inicial de Figura
	int x,y;
	for(x=1; x <=(*larg); x+=1){
		for (y=1; y<=(*alt); y=y+1){
			if (x==1 || x == *larg){
				if(x==1 && y==1 || x==1 && y==*larg || y==1 || x==*alt && y==*alt||x==1&&y==1)
				{
					printf("%c", F3);
				}else{
					printf("%c", F2);
				}
			}else{
				if(y==1 || y==*alt){
					printf("%c", F1);
				}else{
					printf(" ");
				}
			}
		}
			printf ("\n");	
	}
}

int main (int argc, char **argv){
	  int x, y;
  	  x=atoi(argv[1]);
	  y=atoi(argv[2]);
   	  Cuadrado(&x,&y);
return 0;
}
