#include <stdio.h>

int main (){
int d1, d2, d3, d4;
printf ("En este programa solo se permite un numero con 4 cifras\n");

printf ("Ingrese el primer digito de su numero: \n");
scanf ("%d", &d1);
printf ("Ingrese el segundo digito de su numero: \n");
scanf ("%d", &d2);
printf ("Ingrese el tercer digito de su numero: \n");
scanf ("%d", &d3);
printf ("Ingrese el cuarto digito de su numero: \n");
scanf ("%d", &d4);

printf ("Los ultimos dos digitos son: %d y %d", d4, d3);
return 0;
}
