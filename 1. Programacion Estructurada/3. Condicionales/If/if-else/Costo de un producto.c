#include<stdio.h>
#include<stdlib.h>
int main(){
    int produA=10,produB=4,produC=9,npz;
    float costoTotal;
    char produ;

    printf("Ingresar tipo de producto A, B o C:\n");
    scanf("%c",&produ);
    if(produ!='A' && produ!='B'&& produ!='C' ){
        printf("Caracter no valido\n");
    }else{
   
    printf("Ingresar numero de piezas: ");
    scanf("%d",&npz);
    
    
    if(produ=='A'){
        costoTotal=produA*npz;
        if(npz<100){
            costoTotal=costoTotal;
        }else{
            if(npz>100){
                costoTotal=costoTotal-(costoTotal*0.10);    
            }
        }
        printf("\nEl producto que eligio es: %c\nEl costo total del producto A fue: %.2f\n  La cantidad de piezas fueron: %d",produ,costoTotal,npz);
    }
    if(produ=='B'){
        costoTotal=produB*npz;
        if(npz>5){
            costoTotal=costoTotal-30;    
        }else{
            costoTotal=produB*npz;
        }
    printf("El Producto que eligio es: %c\nEl costo total del producto B fue: %.2f\nLa cantidad de piezas fueron: %d",produ,costoTotal,npz);
    }
    if(produ=='C'){
        costoTotal=produC*npz;
        printf("\nProducto: %c\n\nEl costo total del producto C fue: %.2f\nLa cantidad de piezas fueron: %d",produ,costoTotal,npz);
             }
          }
      }
