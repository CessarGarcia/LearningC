#include<stdio.h>

int main(){
	int i,j,aux, tam;
	
	printf("Ingrese el tamaño de la matriz cuadrada:\t");
	scanf("%d", &tam);
	
	int matriz [tam][tam];
	//int pares [tam+1][tam+1]={{},{}};
	//int impares [tam+1][tam+1]={{},{}};
	
	printf("\nLlenado de matriz");
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			printf("\nIngrese numero en la ubicacion [%d][%d]:\t", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			if(matriz[i][j]%2==0){
				pares[i][j]=matriz[i][j];
			}
			if(matriz[i][j]%2!=0){
				impares[i][j]=matriz[i][j];
			}
		}
	}
	
	for(i=0;i<tam;i++){
		aux=0;
		for(j=0;j<tam;j++){
		
			if(pares[i][j]>pares[i][j+1]){
					aux =pares[i][j];
					pares[i][j] = pares[i][j+1];
					pares[i][j+1] = aux;
				}
			if(impares[i][j]>impares[i][j+1]){
					aux =impares[i][j];
					impares[i][j] = impares[i][j+1];
					impares[i][j+1] = aux;
				}
		}
	}
	
	printf("\nMatriz Par en forma ascedente\n");
	for(i=0;i<tam+1;i++){
		for(j=0;j<tam+1;j++){
			if(pares[i][j]!=0){
			printf("%d\t", pares[i][j]);	
			}
		}
	}
	printf("\nMatriz Impar en forma ascendente\n");
	for(i=0;i<tam+1;i++){
		for(j=0;j<tam+1;j++){
			if(impares[i][j]!=0){
				
			printf("%d\t", impares[i][j]);}
		}
	}
	
}
