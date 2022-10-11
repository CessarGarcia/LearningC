#include <stdio.h>
#include <stdlib.h>
//Prototipos de funciones
void pedirDatos();
void mult(float x, float y);
float num1, num2; //Var de tipo global util para todas las funciones 

int main(){
     //Se debe llamar a las funciones en orden correcto 
    //1. PedirDatos
    //2. mult
	pedirDatos();
    mult(num1, num2);

    return 0;
}

void pedirDatos(){  //No se pasan variables ya que es una fun para ingresar datos
    printf("Digite un numeros: ");
    scanf("%d", &num1);
    printf("Digite otro numeros: ");
    scanf("%d", &num2);
}

void mult(float x, float y){
    //float mult = num1 * num2;
    printf("La multiplicacion es: %d", num1*num2); 
}
