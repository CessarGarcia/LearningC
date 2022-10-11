#include <stdio.h>

 /* struct cuadrilatero{
    int base, altura, i, j;
    
  };  	//lleva ; ya que indica que termina una intruccion*/

int main(){
	int renglon;
	int linea;
	struct cuadrilatero cuadrilatero1;
	cuadrilatero1.alto=10;
	cuadrilatero1.ancho=30;
	printf("\n");
	
	for(renglon = 1; renglon <=cuadrilatero1.alto; renglon++){
	for(linea = 1; linea <=cuadrilatero1.ancho; linea++ ){
		if((renglon==1&&linea==1)||(renglon==alto&&linea==ancho)||(renglon==1&&linea==ancho)||(renglon==alto&&linea==1)){
			printf("*");
	}else{
		if(linea==1||linea==ancho)
			printf("|");
	else{
		if(renglon==1||renglon==alto)
		printf("-");
		else printf(" ");
		}
	}
}
printf("\n");
}
  return 0;
}
