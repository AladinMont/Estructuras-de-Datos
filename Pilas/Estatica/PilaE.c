#include "PilaE.h"

int push(struct pila **cabeza, int dato){
    int tope=0;
    struct pila *nuevo=*cabeza;
    if(nuevo!=NULL){
        tope=nuevo->tope;
        tope++;
        nuevo->dato[tope]=dato;
        nuevo->tope=tope;
        return 1;
    }
    return 0;
}




void desplegar(struct pila *cabeza){
    int i=0, tope=0;
    struct pila *Aux=cabeza;
    tope=Aux->tope;
    for(i=0;i<=tope;i++){
        printf("%d   ",Aux->dato[i]);
    }
    printf("\n");
}
