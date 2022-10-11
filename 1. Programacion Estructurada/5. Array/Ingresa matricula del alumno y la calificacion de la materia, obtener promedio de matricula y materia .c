#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int n,k;
int matri[' '],clvMate[' '],*apmatri,*apclvMate;
float prom1, prom2, prom3, max, *apmax;
float cali1,cali2,cali3,*apcali1,*apcali2,*apcali3;

int main(){
	system("color 0A");
    apmax=&max;
	apcali1=&cali1;apcali2=&cali2;apcali3=&cali3;
	do{
		printf("Cuantos estudiantes necesita registrar: ");
		scanf("%d",&n);
		system("CLS");
	}while(n<=0);
	apmatri=matri;
	apclvMate=clvMate;
	
	for(k=0;k<n;k++){
		printf("\n Escriba la matricula del estudiante %d: ",k+1);
		scanf("%d",apmatri);
		printf("\n Escriba la clave de la Materia segun sea el caso \n 1001 para MATEMATICAS\n 1002 para BIOLOGIA\n 1003 para DIBUJO\n");
		scanf("%d",apclvMate);
		system("CLS");
		
		if(*apclvMate==1001){
		printf("Ah elegido la materia de MATEMATICAS con la clave %d", *apclvMate);
		printf("\n Ingrese la calificacion 1: ");
        scanf("%f",apcali1);
        printf("Ingrese la calificacion 2: ");
        scanf("%f",apcali2);
        printf("Ingrese la calificacion 3: ");
        scanf("%f",apcali3);
               
		if(*apcali1>*apcali2){
		  if(*apcali1>*apcali3){
			 *apmax=*apcali1;
		}else{
		*apmax=*apcali3;
		}
		}else{
			if(*apcali2>*apcali3){
				*apmax=*apcali2;
			}else{
			*apmax=*apcali3;
			}
		}
         prom1=((*apcali1+*apcali2+*apcali3)/3);
            printf("\n El alumno con la matricula: %d\n Su promedio fue: %.2f\n",*apmatri, prom1);
		printf("La materia de MATEMATICAS con la clave %d \n La calificacion mas alta fue %.2f\n\n",*apclvMate, *apmax);
		system("PAUSE");
		system("CLS");
	}
		else{
		if(*apclvMate==1002){
			printf("Ah elegido la materia de BIOLOGIA con la clave %d\n", *apclvMate);
		printf("\n Introduzca la calificacion 1: ");
        scanf("%f",apcali1);
        printf("Introduzca la calificacion 2: ");
        scanf("%f",apcali2);
        printf("Introduzca la calificacion 3: ");
        scanf("%f",apcali3);
		if(*apcali1>*apcali2){
			  if(*apcali1>*apcali3){
			  *apmax=*apcali1;
			 }else{
			*apmax=*apcali3;
		    }
	  	}else{
			if(*apcali2>*apcali3){
				*apmax=*apcali2;
			}else{
				*apmax=*apcali3;
			}
		}	
        prom2=((*apcali1+*apcali2+*apcali3)/3);	
        printf("\n El alumno con la matricula: %d \n Su promedio es: %.2f\n",*apmatri, prom3);
        printf("La materia de BIOLOGIA con la clave %d\n La calificacion mas alta fue: %.2f\n",*apclvMate, *apmax);
        system("PAUSE");
        system("CLS");
        
		}else
		if(*apclvMate==1003){
		printf("Ah elegido la materia de DIBUJO con la clave %d\n", *apclvMate);
		
		printf("Introduzca la calificacion 1: ");
        scanf("%f",apcali1);
        printf("Introduzca la calificacion 2: ");
        scanf("%f",apcali2);
        printf("Introduzca la calificacion 3: ");
        scanf("%f",apcali3);	
        if(*apcali1>*apcali2){
		  if(*apcali1>*apcali3){
		 *apmax=*apcali1;
	}
	else{
		*apmax=*apcali3;
	}
	}
	else{
		if(*apcali2>*apcali3){
			*apmax=*apcali2;
		}
		else{
			*apmax=*apcali3;
		}
	}
		
        prom3=((*apcali1+*apcali2+*apcali3)/3);
         printf("\n El alumno con la matricula: %d \n Su promedio es: %.2f\n",*apmatri, prom3);
        printf("La materia de DIBUJO con la clave %d\n La calificacion mas alta fue:  %.2f\n",*apclvMate, *apmax);
		  system("PAUSE");
		  system("CLS");
		}
		}
	}
}
