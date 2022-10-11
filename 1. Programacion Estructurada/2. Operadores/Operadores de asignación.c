#include <stdio.h>

int main(){
	int a, b, c; 
	a = b = c = 20;
	printf("El valor de las variables es: %d, %d, %d \n", a, b, c); 
	
	a*=10; // a=a*10 -> a"20" * 10 = 200 
	b/=10; // b=b/10 -> b"20" / 10 = 2
	c+=10; // c= c+10 -> c"20" + 10 = 30
	
	printf("El valor de las variables es: %d, %d, %d \n", a, b, c); 
	
	return 0;  
}
