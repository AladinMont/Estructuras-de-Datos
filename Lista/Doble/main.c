#include "Doble.h"

void main (void){
    struct doble *cabeza = NULL;
    InsertarInicio(&cabeza, 1);
    Insertar(&cabeza, 2);
    Insertar(&cabeza, 3);
    Insertar(&cabeza, 4);
    Insertar(&cabeza, 5);
    Insertar(&cabeza, 6);
    Insertar(&cabeza, 7);
    Insertar(&cabeza, 8);
    Insertar(&cabeza, 9);
    Insertar(&cabeza, 10);
    Mostrar(cabeza);
    Eliminar(&cabeza, 3);
    Mostrar(cabeza);
}
