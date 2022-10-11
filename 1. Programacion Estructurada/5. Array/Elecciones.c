#include <stdio.h>

int main(){
	int votos[5][5] = {{194,180,221,432,820}, {48,20,90,50,61}, {206,320,140,821,946}, {45,16,20,14,18}};
    int suma=0, i,j,sumaFila;
    
	printf("Distrito  \t Candidato     \t\t Candidato     \t Candidato     \t\t Candidato \n");
    printf("\t\t      A\t          \t B \t          \tC\t          \tD \n");
    
    
    	for(i=0; i<5; i++){ //impresion de la matriz 
    		
		for(j=0; j<4; j++){
			printf("%d",i+1);
			printf("\t            %d", votos[j][i]);
		
		}
		
		   printf("\n");
	}

	
	printf("\n");
    
   
    //Los distritos van en orden
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			suma+=votos[i][j];
		}
	}
	
	printf("\n");
	for(i=0; i<4; i++){
	     
		sumaFila=0;		
		
		for(j=0; j<5; j++){
			sumaFila +=votos[i][j];
			
		}
	
		 
		printf("\tTotal votos: %d",sumaFila);
	}
	
	printf("\n \nEl total de votos en la eleccion: %d", suma);
	
    return 0;
	}
