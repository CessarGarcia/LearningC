#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  char palabra[20];
  int cont=0,k=0;
  printf(“introduzca una palabra y al comcluir la misma precione +  \n”);
  scanf(“%c”,&palabra[k]);
  while (palabra[k]!=’+’){
        scanf(“%c”,&palabra[++k]);
        cont++;}
       
  printf(“la cantidad de letras introducidas son %d\n”,k);
  system(“PAUSE”); 
  return 0;
}
