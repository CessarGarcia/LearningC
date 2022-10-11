#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void ingresoClave()
{
    char clave[10];
    int intentos=0;
    do {
        if (intentos==3)
        {
        	printf("\n Lo sentimos, la contraseña %c que usted ingreso es incorrecta, ingrese la contraseña correcta nuevamente", clave);
            exit(1);
        }
        printf("Ingrese clave:");
        gets(clave);
        intentos++;
    } while (strcmp(clave,"123abc")!=0);
}


int main()
{
    ingresoClave();
    printf("Bienvenido\n");
    getch();
    return 0;
}
