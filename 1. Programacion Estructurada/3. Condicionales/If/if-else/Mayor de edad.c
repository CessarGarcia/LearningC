#include<stdio.h>

int main(){
	int edad;
		printf("Por favor ingrese su edad ");
		scanf("%d", &edad);
		
		if(edad>=18){
			puts("Es mayor de edad ");
		}else{
			puts("Es menor de edad");
		}
	return 0;
}
