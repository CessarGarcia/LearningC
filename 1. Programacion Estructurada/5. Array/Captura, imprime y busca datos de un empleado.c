#include<stdio.h>
#define p printf
#define s scanf

int t=0; //Trabajadores

struct departamento{
	int clv;				//Clave del departamento
	char nombredep[30];		//Nombre del departamento
	int nemp;				//Numero de empleados en el departamento
	char jefe[30];			//Nombre de jefe de departamento
};

struct empleado{
	char nombre[30];			//Nombre del empleado
	struct departamento dep;	//Struct de departamento
	int antg;					//Antiguedad del empleado
	float sueldo;				//Sueldo del empleado
}empleados[30];

void capturar();
void imprimir();
void buscarempleado();
void buscardep();

int main(){
	int opc;
	char nom_emp[30];
	char nom_dep[30];	
	do{
		do{
			system("cls");
			p("\t Menu\n 1.-Capturar empleado\n 2.-Imprimir empleados\n 3.-Buscar empleado\n 4.-Buscar departamento\n 5.-Salir\n \n Opcion: ");
			s("%d", &opc);
			if(opc<1 || opc >5)
				p("\nOpcion invalida");
		}while(opc <1 || opc >5);
		
		switch(opc){
			case 1:
				capturar();
				break;
			case 2:
				imprimir();
				break;
			case 3:
				printf("Ingrese el nombre del empleado: ");
				fflush(stdin);
				gets(nom_emp);
				buscarempleado(nom_emp);
				break;
			case 4:
				printf("Ingrese el nombre del departamento: ");
				fflush(stdin);
				gets(nom_dep);
				buscardep(nom_dep);
				break;
			case 5:
				return 0;
				break;
		}
	}while(opc != 5);
	system("pause");
}

void capturar(){
	system("cls");
	t++; 	//Sumamos un empleado 
	p("\nCaptura de empleado %d", t);
	int dep, dpt; //Para comprobar si el departamento ya existe
	int a; //Contador para for
	fflush(stdin);
	dpt=0;
	p("\nNombre del empleado: ");
	gets(empleados[t].nombre);
	fflush(stdin);
	p("Ingrese la clave del departamento: ");
	s("%d", &dep);
	//CICLO PARA VERIFICAR SI EL DEPARTAMENTO YA EXISTE
	for(a=1;a<=t;a++){
		//SI EXISTE SOLO AUMENTAR EMPLEADO A ESE DEPARTAMENTO
		if(empleados[a].dep.clv == dep){
			empleados[a].dep.nemp+=1;
			dpt=1;
		}
	}
	if(dpt==1){
		//No hacer nada porque significa que ya existia el departamento
	}else{
		//Agregar departamento
		empleados[t].dep.clv=dep;
		fflush(stdin);
		p("Ingrese el nombre del departamento: ");
		gets(empleados[t].dep.nombredep);
		empleados[t].dep.nemp+=1;			//Sumar empleado al departamento
		fflush(stdin);
		p("Jefe de departamento: ");
		gets(empleados[t].dep.jefe);
	}
	fflush(stdin);
	p("Antiguedad del empleado: ");
	s("%d", &empleados[t].antg);
	fflush(stdin);
	p("Sueldo del empleado: ");
	s("%f", &empleados[t].sueldo);	
}

void imprimir(){
	system("cls");
	int c;
	p("Nombre\tDepartamento\tAntiguedad\tSueldo");
	for(c=1;c<=t;c++){
		printf("\n%5s %5d %5d %5.2f", empleados[c].nombre, empleados[c].dep.clv, empleados[c].antg, empleados[c].sueldo);
	}
	p("\n\n");
	system("pause");
}

void buscarempleado(char nombre[30]){
	int q, l;
	for(q=1;q<=t;q++){
		if(strcmp(empleados[q].nombre, nombre)== 0){
			p("\n Empleado: %s", empleados[q].nombre);
			p("Sueldo: %.2f", empleados[q].sueldo);
			p("Departamento: %s", empleados[q].dep.nombredep);
			p("Jefe de departamento: %s", empleados[q].dep.jefe);
			l=1;
		}
	}
	if(l != 1){
		p("\nNo se encontro el empleado");
	}
	p("\n\n");
	system("pause");
}

void buscardep(char nombred[30]){
	int q, l, v;
	float mayor=0;
	int empleadomayor;
	for(q=1;q<=t;q++){
		if(strcmp(empleados[q].dep.nombredep, nombred)== 0){
			p("\nDepartamento: %s", empleados[q].dep.nombredep);
			p("Numero de empleados: %d", empleados[q].dep.nemp);
			p("Departamento: %s", empleados[q].dep.nombredep);
			for(v=1;v<=t;v++){
				if(strcmp(empleados[q].dep.nombredep, nombred)==0){
					if(empleados[q].sueldo>mayor){
						mayor=empleados[q].sueldo;
						empleadomayor=q;
					}
				}
			}
			p("\nEmpleado con mayor sueldo: %s", empleados[empleadomayor].nombre);
			l=1;
		}
	}
	if(l != 1){
		p("\nNo se encontro el empleado ");
	}
	p("\n\n");
	system("pause");
}
