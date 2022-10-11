#include <stdio.h>

int main(){
     int encuestas, i, consume, marca, xdia, no=0, si=0, pepsi=0, cocacola=0, otra=0, suma=0;
     float promedio=0;
     printf("\t A cuantas personas va a encuestar: \n");
     scanf("%d",&encuestas);
     
     for(i=0;i<=encuestas;i++){
         printf("La persona toma refresco? 1 Si 2 No\n");
         scanf("%d",&consume);
            if(consume==1)
            {
                si++;
                 printf("Cual es su marca preferida?\n 1. Pepsi\n 2. Coca Cola\n 3. Otros\n");
                scanf("%d",&marca);
             if(marca==1){
                 pepsi++;
             }
             else{
                 if(marca==2){
                     cocacola++;
                 }
             }
                   	if(marca==3){
             		otra++;
				 }
             printf("Cuantos consume por dia?\n");
             scanf("%d",&xdia);
             suma+=xdia;
         }
         else{
             no++;
         }
     }

     promedio=suma/si;
     printf("Las personas que no les gusta el refresco son: %d\n",no);
     printf("Las personas que prefieren Pepsi son: %d\n",pepsi);
     printf("Las personas que prefieren Coca cola son: %d\n",cocacola);
      printf("Las personas que prefieren otra marca son: %d\n",otra);
     printf("El promedio de la cantidad de refrescos que consumen las personas: %.2f",promedio);
 }
