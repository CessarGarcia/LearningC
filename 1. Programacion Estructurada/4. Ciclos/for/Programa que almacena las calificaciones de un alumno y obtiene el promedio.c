#include <stdio.h>

int main(){
	int i;
	float cali[10], prom = 0;
	
	for(i=0; i<10; i++){
		printf("Cual es la calificacion: %d\n", i+1);
		scanf("%f", &cali[i]);
		prom+= cali[i];
	}
	printf("El promedio de las calificaciones es: %.2f\n", prom/10);
	
	return 0;
}
