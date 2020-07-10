#include "PilaD.h"

int push(struct pila **cabeza, int dato){
	struct pila* nuevo =(struct pila *) malloc(sizeof(struct pila));
	if(nuevo!=NULL){
        nuevo->dato=dato;
        nuevo->siguiente=*cabeza;
        *cabeza=nuevo;
        return 1;
    }
    return 0;
}

int pop(struct pila **cabeza){
	struct pila* nuevo=*cabeza;
	if(nuevo != NULL){
		*cabeza=nuevo->siguiente;
	}
}

void desplegar(struct pila *cabeza){
	struct pila *actual = cabeza;
	if(actual != NULL){
		while(actual->siguiente != NULL){
			printf("%d   ", actual->dato);
			actual = actual->siguiente;			
		}
	}
    printf("\n");
}




