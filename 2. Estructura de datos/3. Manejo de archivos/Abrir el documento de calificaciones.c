#include <stdio.h>
 
int main(){
   FILE *fp;
   fp = fopen("C://Users/Universidad/Documents/FCFM/test.csv", "w+");
   fprintf(fp, "Matricula, Calificacion\n");
   fprintf(fp, "1, 100\n");
   fprintf(fp, "2, 90\n");
   fprintf(fp, "5, 80\n");
   fclose(fp);
   printf("Archivo guardado");
}
