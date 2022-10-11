#include <stdio.h>

int main (){
    float kwxh, costo;
    char nombre[20];
    
    printf("Ingrese el nombre del usuario ");
    gets(nombre);
    
    printf("Cuantos kwxh utilizo el usuario ");
    scanf("%f", &kwxh);
    
    if (kwxh < 1000){
        costo = kwxh*1.2;
        printf("El costo a pagar del cliente %s es: %.2f", nombre, costo);
        }
        
    if (kwxh>1000 && kwxh<1850){
        costo = kwxh*1;
        printf("El costo a pagar del cliente %s es: %.2f", nombre, costo);
        }
        
    if (kwxh>1850){
        costo = kwxh*0.9;
        printf("El costo a pagar del cliente %s es: %.2f", nombre, costo);
    }
    
    printf("El costo a pagar del cliente %s es: %.2f", nombre, costo);
    return 0;
}
