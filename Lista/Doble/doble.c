#include<stdio.h>

struct Doble {
    int dato;
    struct Doble *siguiente;
    struct Doble *anterior;
};

struct Doble *invertir(struct Doble  *lista) {
    struct Doble *auxiliar=NULL;
    struct Doble *temporal=NULL;
    if(lista==NULL){
        return NULL;
    }
    while(lista->siguiente!=NULL){
        lista=lista->siguiente;
    }
    auxiliar=lista;
    while(auxiliar!=NULL){
        temporal=auxiliar->siguiente;
        auxiliar->siguiente=auxiliar->anterior;
        auxiliar->anterior=temporal;
        auxiliar=auxiliar->siguiente;
    }
    return lista; 
}

void mostrar (struct Doble *lista){
    while(lista!=NULL){
        printf("%d, ",lista->dato);
        lista=lista->siguiente;
    }
}

int main()
{
    struct Doble a;
    struct Doble b;
    struct Doble c;
    struct Doble *invertido;
    
    a.dato=1;
    a.siguiente=&b;
    a.anterior=NULL;
    
    b.dato=2;
    b.siguiente=&c;
    b.anterior=&a;
    
    c.dato=3;
    c.siguiente=NULL;
    c.anterior=&b;
    
    mostrar (&a);
    
    invertido=invertir(&a);
    
    mostrar (invertido);
    
    return 0;
}
