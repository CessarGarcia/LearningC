#include <stdio.h>

int main (){
	int n, i, c1, c2, c3, boleto;
	int suma=0, suma1=0, suma2=0, suma3=0;
	/* 3 diferentes clases de boletos. 
		a) Se lea el precio de las 3 clases de boleto
		b) calcular e imprimir el numero de boletos vendidos de cada clase (i) 
		c) calcular e imprimir cual tipo de boleto es el que menos se vendio 
		d) calcular e imprimer el total recuadado en taquilal 
	*/
	
	printf("\t Bienvenido a La magia del cine \n");
	printf("Las clase de boleto son:   \n");
	printf("Clase 1: Sala normal 	\t$30\n");
	printf("Clase 2: Sala 3D 		$40\n");
	printf("Clase 3 VIP 			$50\n");
	printf("Cuantas ventas se realizaron este dia?\n");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
			printf("Ingrese la clase del boleto\n");
			scanf("%d", &boleto);
		switch(boleto)
			{
			case 1: printf("Ingrese la cantidad de boletos vendidos: \n");
				scanf("%d", &c1);
				suma1+=c1;
				suma=suma+(c1*30);
				break;
			case 2: printf("Ingrese la cantidad de boletos vendidos: \n");
				scanf("%d", &c2);
				suma2+=c2;
				suma=suma+(c1*40);
				break;
			case 3: printf("Ingrese la cantidad de boletos vendidos: \n");
				scanf("%d", &c3);
				suma3+=c3;
				suma=suma+(c3*50);
				break;
			default: printf("No existe esa clase");
				break;
			}
	}
	
	if(suma3<suma2 && suma3<suma1)
	printf("Los Boletos que se vendieron menos fueron los boletos numero UNO\n");
	if(suma2<suma3 && suma2<suma1)
	printf("Los Boletos que se vendieron menos fueron los boletos numero DOS\n");
	if(suma1<suma2 && suma1<suma3)
	printf("Los Boletos que se vendieron menos fueron los boletos numero TRES\n");

	printf("El total recaudado en taquilla, durante este dia fue: %d\n", suma);


return 0;

}
