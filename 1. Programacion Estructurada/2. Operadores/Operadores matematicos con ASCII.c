#include <stdio.h>
	//Uso de caracteres ASCII
void main(){
    char caracter = 'e';
    int valor_ascii = (int) caracter;
    printf ("El valor del carcter %c es %d \n", caracter, valor_ascii);
    
    int valor1= 36, valor2 = 47;
    
    int suma = valor1 + valor2;
    printf ("El suma de %d y %d es %d\n", valor1, valor2, suma);
    
    int resta = valor1 - valor2;
    printf ("El resultado de la resta de %d  y %d es %d \n", valor1, valor2, resta);
    
    int multiplicacion = valor1 * valor2;
    printf ("El resultado de la multiplicacion es %d y %d es %d \n", valor1, valor2, multiplicacion);
    
    int division_entera = valor1 / valor2;
    printf ("La division entera de %d y %d es %d\n", valor1, valor2, division_entera);
    
    float division_flotante = (float) valor1 / valor2;
    printf ("El resultado de la division flotante entre %d y %d es %.5f\n", valor1, valor2, division_flotante);
    
}
