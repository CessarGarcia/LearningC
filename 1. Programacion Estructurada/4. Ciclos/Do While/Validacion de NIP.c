#include <stdio.h>
#include <stdlib.h>
	//Ciclo do-while
int main(){
	int NIP=1234, op=3, i=1;
	
	
	do{
		printf("Ingresa su nip porfavor ");
		scanf("%d", &NIP);
		if(NIP == 1234){
			printf("\n Bienvenido, NIP correcto ");
			exit(0); 
			
		}else{
			 printf("Error de NIP oportunidad %d de %d \n", i, op);
			 system("pause");
			 system("cls"); 
			 i++;
			 if(i>op){
			 	printf("El NIP ha superado la mayor cantidad de veces posibles "); 
			 }
		}
	}while(i<=op);
	return 0; 
}
