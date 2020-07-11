#ifndef __HashA_H__
#define __HashA_H__

#include<stdio.h>
#include<stdlib.h>

typedef struct hash{
	struct lista *datos;
	int libre[100];
	int cuantos;
}hash;

typedef struct lista{
	int dato;
	struct lista * siguiente;
}lista;

int funcion_hash( int dato );
int insertar(struct hash tabla[], int dato);
struct lista *crearlista(int dato);
struct lista * agregarPpio(struct lista *lista, struct lista *nuevoNodo);
void mostrar(struct hash tabla[]);

#endif
