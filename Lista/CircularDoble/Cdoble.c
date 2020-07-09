#include "CDoble.h"

nodo* primero = NULL;
nodo* ultimo = NULL;

void insertarNodo(int dato){
	nodo* nuevo = (nodo*) malloc(sizeof(nodo));
    nuevo->dato=dato;
	if(primero==NULL){
		primero = nuevo;
		primero->siguiente = primero;
		ultimo = primero;
		primero->atras = ultimo;
	}else{
		ultimo->siguiente = nuevo;
		nuevo->siguiente = primero;
		nuevo->atras = ultimo;
		ultimo = nuevo;
		primero->atras = ultimo;
	}
}

void desplegarLista(){
	nodo* actual = (nodo*) malloc(sizeof(nodo));
	actual = primero;
	if(primero!=NULL){
		do{
			printf("%d   ", actual->dato);
			actual = actual->siguiente;
		}while(actual != primero);
	}
    printf("\n");
}

void eliminarNodo(int dato){
	nodo* actual = (nodo*) malloc(sizeof(nodo));
	actual = primero;
	nodo* anterior = (nodo*) malloc(sizeof(nodo));
	anterior = NULL;
	int nodoBuscado = 0, encontrado = 0;
    nodoBuscado=dato;
	if(primero!=NULL){
		do{
			if(actual->dato == nodoBuscado){
				if(actual==primero){
					primero = primero->siguiente;
					primero->atras = ultimo;
					ultimo->siguiente = primero;
				}else if(actual==ultimo){
					ultimo = anterior;
					ultimo->siguiente = primero;
					primero->atras = ultimo;
				}else{
					anterior->siguiente = actual->siguiente;
					actual->siguiente->atras = anterior;
				}
				encontrado = 1;
			}
			anterior = actual;
			actual = actual->siguiente;
		}while(actual != primero && encontrado != 1);
		if(encontrado == 0){
			printf("\n Nodo no Encontrado\n\n");
		}else{
			free(anterior);
		}
	}else{
		printf("\n La Lista se encuentra vacia\n\n");
	}
}

