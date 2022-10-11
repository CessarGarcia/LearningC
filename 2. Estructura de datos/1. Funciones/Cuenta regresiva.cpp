#include<iostream>
#include<conio.h>

void cuentaRegresiva(int numero){
	std::cout<<"\n "<<numero;
	if(numero > 0){
		cuentaRegresiva(numero-1);	
	}	
}

int main(){
	int numero= 10;
	cuentaRegresiva(numero);
	return 0;
}
