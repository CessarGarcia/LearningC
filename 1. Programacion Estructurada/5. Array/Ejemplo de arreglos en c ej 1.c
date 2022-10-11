#include <stdio.h>
#include <conio.h>

main(){
	int i, arreglo[7];
	for(i=0; i<7; i++){
		printf("Dame un valor %d:\n", i+1);
		scanf("%d", &arreglo[i]);
	}
	for (i=0; i<7; i++)
	{
		printf("%d\n", arreglo[i]);
		}
		getch();
} 
