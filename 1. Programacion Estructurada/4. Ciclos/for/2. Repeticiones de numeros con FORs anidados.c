#include <stdio.h>
//For anidado

int main(){
	int i, j, n;
	printf("Elige hasta que numero deseas la repeticion \n");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++)
			printf("%d", i);
		printf("\n"); 
	}
	
	return 0;
}
