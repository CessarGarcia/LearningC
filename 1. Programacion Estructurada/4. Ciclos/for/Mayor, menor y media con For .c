// Solicitar al usuario n numeros y verificar cual de los numeros ingresados es el mayor, menor y su media de ellos 

#include <stdio.h>
#include <stdlib.h> 

int main(){
	int n, i, num, mayor, menor=100000, sum=0, med;
	printf("Cuantos numeros ingresara ");
	scanf("%i", &n);
	
	for(i=1; i<=n; i++){
		printf("Ingrese un numero \t");
		scanf("%i", &num);
		if(num>mayor){
			mayor = num;
		}else if(num<menor){
			menor = num;
		}
		sum += num;
	}
	med = sum/n;
	
	printf("\n\n El numero mayor es: %i", mayor);
	printf("\n El numero menor es: %i", menor);
	printf("\n La media es: %i", med); 
	
	return 0;
}
