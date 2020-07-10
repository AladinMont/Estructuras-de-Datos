#include "ColaP.h"

int main (void){
    struct cola *cabeza=(struct cola *)malloc(sizeof(struct cola));
    cabeza->cuantosa=0;
    cabeza->actuala=-1;
    cabeza->colaa=(int *)malloc((cabeza->cuantosa)*sizeof(int));
    cabeza->cuantosb=0;
    cabeza->actualb=-1;
    cabeza->colaa=(int *)malloc((cabeza->cuantosb)*sizeof(int));
    cabeza->cuantosc=0;
    cabeza->actualc=-1;
    cabeza->colaa=(int *)malloc((cabeza->cuantosc)*sizeof(int));

    enqueue(&cabeza,1,1);
    enqueue(&cabeza,2,2);
    enqueue(&cabeza,3,3);
    enqueue(&cabeza,4,2);
    enqueue(&cabeza,5,3);
    enqueue(&cabeza,6,1);
    desplegar(cabeza);
    dequeue(&cabeza);
    desplegar(cabeza);
    dequeue(&cabeza);
    desplegar(cabeza);
    dequeue(&cabeza);
    desplegar(cabeza);
    dequeue(&cabeza);
    desplegar(cabeza);
    dequeue(&cabeza);
    desplegar(cabeza);
}
