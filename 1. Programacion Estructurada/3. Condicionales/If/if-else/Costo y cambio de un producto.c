//Programa que dando el costo de un producto verifique si alcanza el precio con el pago dado, y si es así mostrar cuanto le sobra 

#include<stdio.h>

int main(){
	int costo, pago;
	
	puts("Ingrese el costo del producto: ");
	scanf("%d", &costo);
	
	puts("Ingrese el pago: ");
	scanf("%d", &pago);
	
	if(pago<costo){
		printf("El pago dado no alcanza a cubrir el costo del producto ");
	}else{
		printf("\n\n\n Gracias por su compra \n ");
		printf("Su cambio es de $%d", pago-costo);
	}
	return 0;
}

