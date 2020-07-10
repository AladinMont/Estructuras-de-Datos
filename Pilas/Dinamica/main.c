#include "PilaD.h"

int main (void){
    struct pila* cabeza = (struct pila*) malloc(sizeof(struct pila));
    push(&cabeza,1);
	push(&cabeza,2);
	push(&cabeza,3);
	push(&cabeza,4);
	push(&cabeza,5);
	desplegar(cabeza);
    pop(&cabeza);
    desplegar(cabeza);
    return 0;
}
