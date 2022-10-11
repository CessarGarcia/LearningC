#include <stdio.h>

int main(){
	char op;
	float num1, num2;
	
	printf("Calculadora basica \n");
	printf("Nota: Los operadores pueden ser +,-,*,/ ");
	printf("\n Ingrese un numero el operador y otro numero\n");
	scanf("%f %c %f", &num1, &op, &num2);
	
	if(op == '+'){
		printf(" = %.2f", num1+num2);
	}else if(op == '-'){
		printf(" = %.2f", num1-num2);
	}else if(op == '*'){
		printf(" = %.2f", num1*num2);
	}else if(op == '/'){
		printf(" = %.2f", num1/num2);
	}else{
		printf("Ingrese una operacion valida"); 
	}
	
}
