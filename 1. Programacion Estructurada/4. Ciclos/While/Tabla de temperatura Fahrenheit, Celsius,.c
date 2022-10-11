#include <stdio.h>
//Imprime la tabla de Fahrenheit, Celsius

main ()
{
	int fahr, cel;
	int lower, upper, step;
	
	lower = 0;     //Limite inferior de la tabla 
	upper = 300;  //Limite superior
	step = 20;   // Tamaño del incremento
	
	fahr = lower;
	while (fahr <= upper){
		cel = 5* (fahr-32)/9;
		printf("%5d %5d\n", fahr, cel)
		fahr +=  step;
		
	}
}
