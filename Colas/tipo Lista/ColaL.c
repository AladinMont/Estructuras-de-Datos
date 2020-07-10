#include "ColaL.h"

int enqueue(struct cola **cabeza, int dato){
	struct cola* nuevo =(struct cola *) malloc(sizeof(struct cola));
    struct cola *Aux=*cabeza;
	if(nuevo!=NULL){
        nuevo->dato=dato;
        nuevo->siguiente=NULL;
        while(Aux->siguiente!=NULL)
            Aux=Aux->siguiente;
        Aux->siguiente=nuevo;
        return 1;
    }
    return 0;
}

int dequeue(struct cola **cabeza){
	struct cola* nuevo=*cabeza;
	if(nuevo != NULL){
		*cabeza=nuevo->siguiente;
	}
}

void desplegar(struct cola *cabeza){
	struct cola *actual = cabeza;
	if(actual != NULL){
        actual=actual->siguiente;
		while(actual != NULL){
			printf("%d   ", actual->dato);
			actual = actual->siguiente;			
		}
	}
    printf("\n");
}




