#include<stdio.h>
int main(){
	int i; 
	for(i=1; i <=20; ++i){
		if(i>=10 && i<=15)
		continue;
		/*Lo que hace el continue es que ignora esa parte del codigo
		y se vuelve a ejecutar pasando esa condicion*/
		printf("El valor es: %d \n", i); 
	}
	return 0;
}
