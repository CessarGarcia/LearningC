#include <stdio.h>
#include <string.h> //para utilizar cadenas de caracteres
struct Alumno{
	int matricula, semestre;
	char Nombre[50];
	
};

int main (){
	struct Alumno alumno_uno;
	alumno_uno.matricula = 1;
	strcpy(alumno_uno.Nombre, "jose");
	alumno_uno.semestre = 2;
	
	struct Alumno *puntero_alumno = &alumno_uno;
	printf("matricula: %d\n nombre %s\n semestre: %d\n", puntero_alumno->matricula, puntero_alumno->Nombre, puntero_alumno->semestre);
}
