#include<stdio.h>
	//Sentencio Switch 
int main(){
	int producto;
	printf("Bienvenido al super, nuestros productos son:\n");
	printf(" \t1. Jugo \n \t2. Refresco \n \t3. Fruta \n \t4. Pollo ");
	printf("\n Selecciona un producto de la lista y se te mostra su precio \n");
	scanf("%d", &producto);
		/*	Nota de  scanf
			Al encerrar el TypeData entre " ", asegurate de hacerlo todo junto es decir "%d",
			ya que sino el espacio agregado esperara a que lo ingreses nuevamente "%d "
		*/
	
	switch(producto){
		case 1: puts("El costo del jugo es: $13");
				break;
		case 2: puts("El costo del refresco es: $15");
				break;
		case 3: puts("El costo de la fruta es: $19 cada kilo");
				break;
		case 4: puts("El costo del kilo de pollo es: $30 "); 
				break; 
		default: puts("Escoja un producto de la lista"); 
	}

	return 0;
}
