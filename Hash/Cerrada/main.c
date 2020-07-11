#include "HashC.h"

int main (void){
    int i=0;
    struct hash *cabeza=(struct hash *)malloc(sizeof(struct hash));
    for(i=0;i<100;i++){
        cabeza->libre[i]=1;
    }
    insertar(cabeza,1);
    insertar(cabeza,15);
    insertar(cabeza,10);
    insertar(cabeza,72);
    insertar(cabeza,154);
    insertar(cabeza,1512);
    insertar(cabeza,654);
    insertar(cabeza,1125);
    mostrar(cabeza);
    return 0;
}
