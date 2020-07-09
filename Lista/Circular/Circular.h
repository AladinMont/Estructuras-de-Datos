#ifndef __Circular_H__
#define __Circular_H__

#include<stdio.h>
#include<stdlib.h>
typedef struct nodo{
	int dato;
	struct nodo* siguiente;
} nodo;




void insertarNodo(int dato);
void eliminarNodo(int dato);
void desplegarLista();

#endif
