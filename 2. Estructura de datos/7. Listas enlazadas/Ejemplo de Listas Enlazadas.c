#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
	char *nombre;
	struct nodo *sig;
}Libro;

Libro *listaLibro(Libro *Lista){
	Lista = NULL;
	return Lista;
}
Libro *agregarLibro(Libro *Lista, char *nombre){
	Libro *nuevoLibro;
	nuevoLibro = (Libro*)malloc(sizeof(Libro));
	nuevoLibro -> nombre = nombre;
	nuevoLibro->sig = NULL;
	if(Lista==NULL){
		Lista = nuevoLibro;
	}else{
		aux = Lista;
		while(aux->sig !=NULL){
			aux = aux->sig;
		}
		aux ->sig= nuevoLibro;
	}
	return Lista;
}
int main(){
	Libro *Lista = listaLibro(Lista);
	Lista = agregarLibro(Lista,"xxxxx 321");
	Lista = agregarLibro(Lista,"siguiente lista");
	printf("%s\n", Lista->nombre);
	printf("%p\n", Lista->sig);
	return 0;
}
