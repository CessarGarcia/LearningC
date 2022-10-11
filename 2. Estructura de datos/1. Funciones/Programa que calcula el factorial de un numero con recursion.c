#include <stdio.h>
int factorial(int factor){
	if(factor==0){
		return 1;
	}
	else{
		return factor*factorial(factor-1);
	}
}

int main(){
	int ejemplo = factorial(5);
	printf("Resultado = %d", ejemplo);
	return 0;
}
