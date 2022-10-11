#include <stdio.h>
#include <stdbool.h>

//Programa que imprima numeros menores a 200 y que sean multiplos de 3 y 7

int main ()
{
	int i;
	for (i=1; i<200; i++)
	if (i%3==0 && i%7==0)
	printf("%d\n", i);
	return 0;
}
