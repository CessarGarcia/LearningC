#include <stdio.h>
int pow(int arg, int exp);

int main(){
	int a, b;
	printf("Ingrese la base del exponente ");
	scanf("%d", &a);
	printf("Ingrese el exponente ");
	scanf("%d", &b);
	int res = pow(a, b); 	//los parentisis contendran los valores que queremos elevar nuestro numero
	printf("El resultado de %d %c %d es: %d",a, 94, b, res);
	return 0;
}

int pow(int arg, int exp){

	int i;
	int res = 1; 
	for(i=0; i<exp; i++){
		res *=arg;
	}
	return res;
}
