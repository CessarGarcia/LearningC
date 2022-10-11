#include<stdio.h>

int main(){
	int tiposala, d_palomitas, t_palomitas, edad, membresia;
	float subtotal, total;
	
	printf("-- Bienvenidos al Cine --\n");
	printf("Puedes ingresar tu edad por favor: \t");
	scanf("%d", &edad);
	
	if(edad<=0){
		printf("\nEdad invalida\n");
		return 0;	
	}
	
	printf("\n¿Cuenta con membresia?\t 1-Si\t2-No\n");
	scanf("%d", &membresia);
	
	if(!(membresia == 1 || membresia == 2)){
		printf("\nOpcion no valida");
		return 0;
	}
	printf("\nElige la sala de tu preferencia\t");
	printf("\n1.Sala Normal\t $35\n2.Sala Premium\t $50\n3.Sala 3D\t $60\n\n");
	scanf("%d", &tiposala);
	
	switch(tiposala){
		case 1:
			subtotal=35;
			break;
		case 2:
			subtotal = 50;
			break;
		case 3:
			subtotal = 60;
			break;
		default:
			printf("\nTipo de sala no valido\n");
			return 0;
			break;
	}
	
	printf("\n¿Desea llevar palomitas?\t 1-Si\t 2-No\n");
	scanf("%d", &d_palomitas);
	
	if(d_palomitas==1){
			printf("\n1.Chicas\t $40\n2.Medianas\t $50\n3.Grandes\t $60\n");
			printf("\n\nIngrese el tamaño de su preferencia:\t");
			scanf("%d", &t_palomitas);
			
			switch(t_palomitas){
				case 1:
					subtotal=subtotal + 40;
					break;
				case 2:
					subtotal= subtotal + 50;
					break;
				case 3:
					subtotal= subtotal + 60;
					break;
				default:
					printf("\nOpcion no valida\n");
					return 0;
					break;
			}
	}else{
		subtotal=subtotal;
	}
	
	
	
	switch(t_palomitas){
		case 1:
			printf("\nPalomitas chicas\t\t $40");
			break;
		case 2:
			printf("\nPalomitas Medianas\t\t $50");
			break;
		case 3:
			printf("\nPalomitas Grandes\t\t $60");
			break;
	}
	
	switch(tiposala){
		case 1:
			printf("\nSala Normal\t\t\t $35");
			break;
		case 2:
			printf("\nSala Premium\t\t\t $50");
			break;
		case 3:
			printf("\nSala 3D\t\t\t $60");
			break;
	}
	
	printf("\nSubtotal:\t\t\t $%.2f", subtotal);
	
	if(edad<=18 || edad>=40){
		printf("\nDescuento de edad\t\t $5");
		subtotal = subtotal - 5;
		printf("\nSubtotal con descuento de edad:\t $%.2f", subtotal);
	}

	if(membresia==1){
		printf("\nDescuento de membresia\t\t $5");
		total = subtotal - 5;
		printf("\nTotal:\t\t\t\t $%.2f", total);
	}else{
		total=subtotal;
		printf("\nTotal:\t\t\t\t $%.2f", total);
	}
}
