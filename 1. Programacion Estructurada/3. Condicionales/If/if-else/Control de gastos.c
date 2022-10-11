#include <stdio.h>

int main(){
	int numero, saldo_inicial, lim_de_credito, cant_gast, cant_depo;
	
	printf("Ingrese el numero del cliente: \n");
	scanf("%d", &numero);
	
	printf("Ingrese el saldo inicial: \n");
	scanf("%d", &saldo_inicial);
	
	printf("Ingrese el limite de credito: \n");
	scanf("%d", &lim_de_credito);
	 
	printf("Ingrese la cantidad de gasto: \n");
	scanf("%d", &cant_gast);
	
	printf("Ingrese la cantidad depositada ese mes: \n");
	scanf("%d", &cant_depo);
	
	if (lim_de_credito <= cant_depo-cant_gast){
			printf("El cliente con el numero esta dentro del limite de credito");
		}else{
			printf("El cliente excedio el limite de credito");
		}
	
			
	return 0;
}
