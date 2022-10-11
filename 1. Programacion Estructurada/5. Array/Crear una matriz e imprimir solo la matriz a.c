#include <stdio.h>


int main() {
	int i, j, n, vn, centro=0, h=0, cantElem, med,l=1;
	int vector[5];
	
	printf("Ingrese el tamano de la matriz: ");
	scanf("%d",&n);
	
	cantElem = n*n;
	med = cantElem/2+1;
	vn = n % 2;
	int matriz[n][n];
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Valor de la matriz en la posicion %d%d: ",i+1, j+1);
			scanf("%d",&matriz[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if((i==0 && j==0) || (i==0 && j ==n-1) || (i==n-1 && j==0) || (i==n-1 && j ==n-1)){
				vector[h]=matriz[i][j];
				h++;
			}
			if(vn!=0 && l==med){
				centro = matriz[i][j];
			}
			l++;
		}
	}
	
	printf("\n VECTOR A \n");
	for(i=0;i<5;i++){
		printf("%d\n",vector[i]);
	}
	if(vn==0){
		printf("\n No tiene centro \n");
	}
	else{
		printf("\n El centro de la matriz es: %d\n",centro);
	}
	
	
	return 0;
}
