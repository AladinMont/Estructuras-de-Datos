#ifndef __Doble_H__
#define __Doble_H__

#include<stdio.h>
#include<stdlib.h>
struct doble
{
  int dato;
  struct doble *siguiente;
  struct doble *anterior;
    
} doble;

struct doble *CrearLista(int dato);
int InsertarInicio(struct doble **cabeza,int dato);
int Insertar(struct doble **cabeza,int dato);
void Mostrar(struct doble *cabeza);
int Eliminar(struct doble **cabeza,int dato);
#endif
