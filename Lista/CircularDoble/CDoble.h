#ifndef __CDoble_H__
#define __CDoble_H__

#include<stdio.h>
#include<stdlib.h>
typedef struct nodo{
	int dato;
	struct nodo* siguiente;
	struct nodo* atras;
} nodo;



void insertarNodo(int dato);
void eliminarNodo(int dato);
void desplegarLista();
#endif
