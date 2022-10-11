#include <stdio.h>

int resolver_serie(int *arg, int cant_of_elem){
  int total=0, x=1;
  int i;
  for(i=0; i<cant_of_elem; i++){
    arg[i]=x*x;
    total += arg[i];
    x++;
  }
  return total;
}


void imprimir_serie(int *arg, int cant_of_elem, int sumatoria){
	int i;
  printf("Valores de la sumatoria:\n");
  for(i=0; i<cant_of_elem; i++){
    printf("%d ",arg[i]);
  }
  printf("\n\n Su sumatoria es: %d\n",sumatoria);
 
}


int main(){
  int elem_max = 15;
  int serie[elem_max];
  int sum=0;
  sum = resolver_serie(serie, elem_max);
  imprimir_serie(serie, elem_max, sum);
  
  return 0;
}
