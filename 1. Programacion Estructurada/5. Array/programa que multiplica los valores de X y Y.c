#include <stdio.h>

int main(){
	int multiplicacion, i, sumatoria = 0;
	int vectorx[5] = {7, 10, 13, 8, 12};
	int vectory[5] = {6, 8, 9, 12, 9};
	
	for(i=0; i<5; i++){
		multiplicacion= vectorx[i]*vectory[i];
		sumatoria+=multiplicacion;
	}
	printf("El resultado de la sumatoria es %d", sumatoria);
	
	return 0;
}
