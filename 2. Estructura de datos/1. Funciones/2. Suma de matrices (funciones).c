#include<stdio.h>

void Matriz1y2(int (*arg1)[5], int (*arg2)[5],
    int (*result_matriz)[5], int tam){
  	int i, j;
  for(i=0; i< tam; i++){
    for(j=0; j<tam; j++){
      arg1[i][j] = i;
      arg2[i][j] = j;
      result_matriz[i][j] = arg1[i][j] + arg2[i][j];
    }
  }
}

void imp(int (*arg)[5], char (*enca), int tam){
	int i, j;
  printf("%s\n",enca);
  for(i=0; i<tam; i++){
    for(j=0; j < tam; j++){
      printf("%d ",arg[i][j]);
    }
    printf("\n");
  }
}

int main()
{
	int elem_Max = 5 ;
	int matriz1[elem_Max][elem_Max];
    int matriz2[elem_Max][elem_Max];
	int result_matriz[elem_Max][elem_Max];
    char Encabezados[3][20] = {"\t Matriz 1","\t Matriz 2","\t Resultado"};
    Matriz1y2(matriz1, matriz2, result_matriz, elem_Max);
    imp(matriz1, Encabezados[0], elem_Max);
    imp(matriz2, Encabezados[1], elem_Max);
    imp(result_matriz, Encabezados[2], elem_Max);
	return 0;
}
