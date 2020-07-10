#include "ColaE.h"

int enqueue(struct cola **cabeza, int dato){
    int frente=0, atras=0;
    struct cola *nuevo=*cabeza;
    if(nuevo!=NULL){
        atras=nuevo->atras;
        atras++;
        frente=nuevo->frente;
        if(frente==-1){
            frente++;
            nuevo->dato[frente]=dato;
        }else{
            nuevo->dato[atras]=dato;
        }
        nuevo->frente=frente;
        nuevo->atras=atras;
        return 1;
    }
    return 0;
}

int dequeue(struct cola **cabeza){
    int frente=0;
    struct cola *nuevo=*cabeza;
    if(nuevo!=NULL){
        frente=nuevo->frente;
        nuevo->dato[frente]=0;
        frente++;
        nuevo->frente=frente;
        return 1;
    }
    return 0;
}

void desplegar(struct cola *cabeza){
    int i=0, atras=0, frente=0;
    struct cola *Aux=cabeza;
    atras=Aux->atras;
    frente=Aux->frente;
    for(i=frente;i<=atras;i++){
        printf("%d   ",Aux->dato[i]);
    }
    printf("\n");
}
