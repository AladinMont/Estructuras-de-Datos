#include "HashA.h"

int funcion_hash( int dato ){
	return dato*dato % 100;
}

int insertar(struct hash tabla[], int dato){
	struct lista *nuevo=crearlista(dato);
    int donde = funcion_hash( dato );
    tabla[donde].datos=agregarPpio(tabla[donde].datos,nuevo);
}


struct lista *crearlista(int dato){
    struct lista *nuevo=(struct lista*)malloc(sizeof(struct lista));
    nuevo->dato=dato;
    nuevo->siguiente=NULL;
    return nuevo;
}

struct lista *agregarPpio(struct lista *lista, struct lista *nuevoNodo){
    if(lista==NULL){
        lista=nuevoNodo;
    }else{
        nuevoNodo->siguiente=lista;
        lista=nuevoNodo;
    }
    return lista;
}

void mostrar(struct hash tabla[]){
    int i=0;
    for(i=0;i<100;i++){
    printf("Lista (%d):\n",i);
        while(tabla[i].datos!=NULL){
            printf("%d   ",(tabla[i].datos)->dato);
            tabla[i].datos=(tabla[i].datos)->siguiente;
        }
    printf("\n");
    }
}
