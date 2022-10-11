#include <stdio.h>
int pordia, i, sumatotal=0;

int main (){
	printf("Hola Familia Perez, este programa te ayudara a calcular el gasto total de tu viaje\n\n");
	
	i=1;
	while (i<=6){
		printf("Ingresa la cantidad de gastos del dia %d\n", i);
		scanf("%d", &pordia);
		sumatotal+= pordia;
		i+=1;
	}
	
	printf("\nEl total gastado en el viaje fue: %d\n\n", sumatotal);
	printf("\t-------Que tengan un excelente viaje!!!-------");

	return 0;
}
