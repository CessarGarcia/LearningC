#include <stdio.h>

int factorial(int n){
	int fact;
	n==2; 
		if(n==0||n==1) //caso base
			fact =1;
		else{
			fact=n*factorial(n-1);
		}
		
	return fact;
}

int main(){
	
	printf(fact);
}
