#include<stdio.h>
int main(){
	int var1 = 10;
	int * ApInt = &var1;
	
	printf("Valor de var1: %d", var1);
	*ApInt = 30;
	printf("\nValor de var1: %d", var1);
	printf("\n ");
	
	return 0;
}
