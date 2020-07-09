#include "Doble.h"

struct doble *CrearLista(int dato){
    struct doble* nuevo=NULL;
    nuevo = (struct doble *) malloc(sizeof(struct doble));
    if(nuevo!=NULL){
        nuevo->dato=dato;
        nuevo->siguiente=NULL;
        nuevo->anterior=NULL;
    }
    return nuevo;
}

int InsertarInicio(struct doble **cabeza,int dato){
    struct doble *nuevo=NULL;
    nuevo=CrearLista(dato);
    if(nuevo!=NULL){
        nuevo->siguiente=*cabeza;
        nuevo->anterior=NULL;
        if(*cabeza!=NULL)
            (*cabeza)->anterior=nuevo;
        *cabeza=nuevo;
        return 1;
    }
    return 0;
}

void Mostrar(struct doble *cabeza){
    struct doble *Aux =cabeza;
    while(Aux!=NULL){
        printf("%d   ",Aux->dato);
        Aux=Aux->siguiente;
    }
    printf("\n");
}

int Insertar(struct doble **cabeza,int dato){
    struct doble *nuevo=NULL, *Aux= *cabeza;
    nuevo= CrearLista(dato);
    if(nuevo!=NULL){
        while(Aux->siguiente!=NULL){
            Aux=Aux->siguiente;
        }
        nuevo->anterior=Aux;
        Aux->siguiente=nuevo;
        return 1;
    }
    return 0;
}

int Eliminar(struct doble **cabeza,int dato){
    struct doble *actual=*cabeza, *ant=NULL, *sig=NULL;
    while(actual != NULL){
        if(actual->dato==dato){
            if(actual==*cabeza){
                *cabeza=actual->siguiente;
                if(actual->siguiente!=NULL)
                    actual->siguiente->anterior=NULL;
            }
            else if(actual->siguiente==NULL){
                ant = actual->anterior;
                actual->anterior=NULL;
                ant->siguiente=NULL;
            }
            else{
                ant=actual->anterior;
                actual->anterior=NULL;
                sig=actual->siguiente;
                actual->siguiente=NULL;
                ant->siguiente=sig;
                sig->anterior=ant;
            }
            free(actual);
            return 1;
        }
        actual=actual->siguiente;
    }
return 0;
}
