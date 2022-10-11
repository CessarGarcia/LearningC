//Programa que muestre la suma de todos los numeros pares y diga cuantos hay

#include <stdio.h>
int main ()
{
   int numero, acumulador=0, contador=0 , i;
 
 printf("Hasta que numero desea hacer la serie  ");
 scanf("%i",&numero);
 
 for(i=1;i<=numero;i++){
   if(i%2==0){
    acumulador = acumulador + i;
    contador+= 1;
    printf("%i\n",i);
   }
}
       printf("\n La suma de los numeros pares es %i ",acumulador);
       printf("\n hay  %i numeros ",contador); 
return 0 ;
}
