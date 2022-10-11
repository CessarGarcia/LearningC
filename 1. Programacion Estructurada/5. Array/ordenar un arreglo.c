#include <stdio.h>
#include <conio.h>

	//Programa que ordena los numeros del menor al mayor
main(){
	int serie[10];
	int x,i, d;
	
	//Para que el usuario ingrese sus numeros
	for(x=0; x<=9; x++){
		printf("Ingresa tu numero %d:  ", x+1);
		scanf("%d", &serie[x]);
		}
	
	//ordenar el arreglo
	for(x=0; x<=9; x++)
		for(i=0, d=1; d<=4; i++, d++)
			if (serie[i]>serie[d])
			{
				int temp=serie[d];
				serie[d]=serie[i];
				serie[i]=temp;
				}	
	
	//imprimir el arreglo ya ordenado
	for(x=0; x<=9; x++)
		printf("\n %d   ",serie[x]);
		
}
