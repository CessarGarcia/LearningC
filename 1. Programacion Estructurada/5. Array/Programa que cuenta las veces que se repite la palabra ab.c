#include<stdio.h>
#include<string.h>

/*EJERCICIO 1
	Dada una cadena de caracteres de longitud máxima 20 caracteres, desarrollar un programa en C, 
	el cual lea la cadena de caracteres y calcula cuantas veces aparece la secuencia de caracteres AB*/

int main(){
	char cadena_de_caracteres[20];  //Creamos un arreglo que nos almacene el texto introducido
	int j,AB=0;		//la variable j nos ayudara al ciclo for y el contador AB para indicar cuantas veces aparece en el programa 
	printf("Introduzca una cadena de caracteres de longitud maxima 20 caracteres: ");
	gets(cadena_de_caracteres); 	//leemos con gets por tratarse de una cadena de caracteres
	if(cadena_de_caracteres[20]>20){ //si en dado caso la cadena contiene mas de 20 caracteres sera invalida
		printf("La Cadena no es valida \n");	//notificamos su invalidacion
		exit(-1);	//cerramos el programa
	}else
	for(j=0;j<20;j++){	//en el caso de contener menos de 20 caracteres entoces
		if(cadena_de_caracteres[j]=='A'&& cadena_de_caracteres[j+1]=='B'){	//Hace una valdcion si en la posicion j aparece 'A' y en la posicion j+1 (la segunda letra aparece'b'
		AB+=1; 	//cuenta las veces que se cumple la condicion dada
	}
	
}

printf("\n La cadena introducida fue: ");	//imprimimos la cada 
puts(cadena_de_caracteres);	//imprimimos la cadena introducida
printf("El total de secuencias de AB que tenga la cadena es: %d\n",AB);	//Nos indica cuantas veces aparecio AB juntas

}
