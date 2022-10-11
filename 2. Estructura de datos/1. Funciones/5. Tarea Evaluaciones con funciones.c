#include <stdio.h>
#include <stdio.h>
#include <string.h>


typedef struct{
    char Matri[8];
    int parcial1;
    int Parcial2;
    int PIA;
    float Fn;
}Eva;

void funcion_captura(Eva *, int *);

int main(){
   FILE *fp;
   int j, i, num_max_struct = 7;
   fp = fopen("evaluaciones.csv", "w+");
   if (fp == NULL){
   	printf("Error");
   }
   
   Eva Evas[7];

   for (j=0; j<num_max_struct; j ++){
          funcion_captura (Evas, &j);
    }

   fprintf(fp, "Matricula, parcial 1, Parcial 2, PIA, Final \n");
   for(i=0; i<7; i++){
       Evas[i].Fn = (float) (Evas[i].parcial1 + Evas[i].Parcial2 + Evas[i].PIA) / 3;
       fflush(stdin);
       fprintf(fp, "%s, %d, %d, %d, %.2f\n", Evas[i].Matri, Evas[i].parcial1, Evas[i].Parcial2, Evas[i].PIA, Evas[i].Fn);
   }
   
   fclose(fp);
   printf("Archivo guardado");

 return 0;
}

 void funcion_captura(Eva A[], int *j){
 		system("color 74");
         printf("\n Ingrese numero de matricula del alumno %d: ", *j+1);
         fflush(stdin);
         scanf("%s", A[*j].Matri);
         printf("Ingrese Calificacion del primer parcial: ");
         fflush(stdin);
         scanf("%d", &A[*j].parcial1);
         printf("Ingrese Calificacion del segundo parcial: ");
         fflush(stdin);
         scanf("%d", &A[*j].Parcial2);
         printf("Ingrese Calificacion del PIA: ");
         fflush(stdin);
         scanf("%d", &A[*j].PIA);
         system("CLS");
 }
