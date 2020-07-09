#include "Circular.h"

struct nodo* primero = NULL;
struct nodo* ultimo = NULL;
void insertarNodo(int dato){
	struct nodo* nuevo = (struct nodo*) malloc(sizeof(struct nodo));
	nuevo->dato=dato;
	
	if(primero==NULL){
		primero = nuevo;
		primero->siguiente = primero;
		ultimo = primero;
	}else{
		ultimo->siguiente = nuevo;
		nuevo->siguiente = primero;
		ultimo = nuevo;
	}
}

void desplegarLista(){
	struct nodo* actual = (struct nodo*)malloc(sizeof(struct nodo));
	actual = primero;
	if(primero!=NULL){
		do{
			printf("%d   ", actual->dato);
			actual = actual->siguiente;
		}while(actual!=primero);
	}
    printf("\n");
}

void eliminarNodo(int dato){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primero;
	nodo* anterior = (nodo*)malloc(sizeof(nodo));
	anterior = NULL;
	int nodoBuscado = 0, encontrado = 0;
    nodoBuscado=dato;
	if(primero!=NULL){
		do{
			if(actual->dato == nodoBuscado){
				if(actual==primero){
					primero = primero->siguiente;
					ultimo->siguiente = primero;
				}else if(actual==ultimo){
					anterior->siguiente  = primero;
					ultimo = anterior;
				}else{
					anterior->siguiente = actual->siguiente;
				}		
				encontrado = 1;
			}
			anterior = actual;
			actual = actual->siguiente;
		}while(actual!=primero && encontrado!=1);
		
		if(encontrado==0){
		}else{
			free(anterior);
		}
	}else{
		printf("\n La lista se encuentra vaci\n\n");
	}
}
