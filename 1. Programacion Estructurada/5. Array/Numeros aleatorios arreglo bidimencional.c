#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int arr[4][4], x, y, acu;

int main(){
	srand(time(NULL)); //Generara numeros aleatorios, la funcion rand por si sola nos genera el mismo num
	for(x=0; x<4; x++) //filas
		for(y=0; y<3; y++) //columna 	
			arr[x][y]=1+rand()%5;  	//nos ayudara para generar num aleatorios dentro del intervalo [1,9]
	
	for(x=0; x<4; x++)
	{
		acu=0;
		for(y=0; y<4; y++)
		acu=acu+arr[x][y];
		arr[x][3]=acu;
	}
	for(x=0; x<4; x++){
		printf("\n");
		for(y=0; y<4; y++)
		printf("  %d", arr[x][y]);
	}
	getch();	
}
