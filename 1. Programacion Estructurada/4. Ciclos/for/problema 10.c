//10. Factorial de un numero.

#include <stdio.h>
int main(){
	int i, num, factorial=1;
	
	printf("Digite el numero para hallar la suma del factorial ");
	scanf("%i",&num);
	
	for(i=1; i<=num; i++){
		factorial = +i;
	}
	
	printf("\n El factorial del numero dado es: %i", factorial);
	return 0;
}
