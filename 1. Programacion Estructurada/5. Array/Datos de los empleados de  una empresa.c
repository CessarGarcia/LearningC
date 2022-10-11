#include<stdio.h>
#include<stdlib.h>

struct info_direccion{
	char direccion[30];
	char ciudad[20];
	char provincia[20];
};

struct empleado{
	char nombre[20];
	struct info_direccion dir_empleado;
	double salario;
}empleados[2];

int main(){
	int i;
	for(i=0; i<2; i++){
		fflush(stdin); 	//para limpiar los valores 
		printf("Ingresa el nombre: %i", i+1);
		gets(empleados[i].nombre);
		printf("Digita su direccion %i", i+1);
		gets(empleados[i].dir_empleado.direccion);
		printf("Digite su ciudad %i", i+1);
		gets(empleados[i].dir_empleado.ciudad);
		printf("Digite su provincia %i", i+1);
		gets(empleados[i].dir_empleado.provincia);
		printf("Digite su salario: ", i+1);
		scanf("%lf", &empleados[i].salario);
		printf("\n");
	}
	
	for(i=0;i<2;i++){
		printf("\n\n Datos del empleado %i", i+1);
		printf("\n nombre: %s", empleados[i].nombre);
		printf("\n Direccion %s", empleados[i].dir_empleado.direccion);
		printf("\n Ciudad %s", empleados[i].dir_empleado.ciudad);
		printf("\n provincia: %s", empleados[i].dir_empleado.provincia);
		printf("\n Salario: %lf", empleados[i].salario);
	}
	system("pause");
	return 0;
}
