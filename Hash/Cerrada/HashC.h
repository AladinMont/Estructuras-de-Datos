#ifndef __PilaE_H__
#define __PilaE_H__

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct hash{
	int datos[100];
	int libre[100];
	int cuantos;
}hash;

int funcion_hash( int dato );
int funcion_rehash( int dato, int intento);
int insertar(struct hash *tabla, int dato);
int mostrar( struct hash * tabla );

#endif
