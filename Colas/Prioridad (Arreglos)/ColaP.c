#include "ColaP.h"

int* arreglo(int *arreglo,int cuantos,int actual){
    int i=0;
    int *temporal=(int *) malloc (sizeof (int) * (cuantos * 2));
    if (temporal == NULL)
	{
	  return arreglo;
	}
      for (i = 0; i < cuantos; i++)
	{
	  *(temporal + i) = *(arreglo + i);
	}
      free (arreglo);
      arreglo = temporal;
    return arreglo;
}

int enqueue(struct cola **cabeza, int dato, int prioridad){
    int cuantos=0, actual=0;
    int *Aux=NULL;
    struct cola *nuevo=*cabeza;
    if(nuevo!=NULL){
        if(prioridad==1){
            cuantos=nuevo->cuantosa;
            actual=nuevo->actuala;
            Aux=nuevo->colaa;
            if(cuantos==actual+1){
                Aux=arreglo(Aux,cuantos,actual);
            }
            actual++;
            Aux[actual]=dato;
            nuevo->colaa=Aux;
            nuevo->cuantosa=(nuevo->cuantosa)*2;
            nuevo->actuala=actual;
        }else if(prioridad==2){
            cuantos=nuevo->cuantosb;
            actual=nuevo->actualb;
            Aux=nuevo->colab;
            if(cuantos==actual+1){
                Aux=arreglo(Aux,cuantos,actual);
            }
            actual++;
            Aux[actual]=dato;
            nuevo->colab=Aux;
            nuevo->cuantosb=(nuevo->cuantosb)*2;
            nuevo->actualb=actual;
        }else if(prioridad==3){
            cuantos=nuevo->cuantosc;
            actual=nuevo->actualc;
            Aux=nuevo->colac;
            if(cuantos==actual+1){
                Aux=arreglo(Aux,cuantos,actual);
            }
            actual++;
            Aux[actual]=dato;
            nuevo->colac=Aux;
            nuevo->cuantosc=(nuevo->cuantosc)*2;
            nuevo->actualc=actual;
        }
        return 1;
    }
    return 0;
}

int dequeue(struct cola **cabeza){
    int cuantosa=0, cuantosb=0, cuantosc, i=0;
    int *Aux=NULL;
    struct cola *nuevo=*cabeza;
    cuantosa=nuevo->actuala;
    cuantosb=nuevo->actualb;
    cuantosc=nuevo->actualc;
    if(nuevo!=NULL){
        if(cuantosa>=0){
            Aux=(int *)malloc((cuantosa+1)*sizeof(int));
            do{
                Aux[i]=nuevo->colaa[i+1];
                cuantosa--;
                i++;
            }while(cuantosa>-1);
            nuevo->colaa=Aux;
            nuevo->actuala-=1;
        }else if(cuantosb>=0){
            Aux=(int *)malloc((cuantosb+1)*sizeof(int));
            do{
                Aux[i]=nuevo->colab[i+1];
                cuantosb--;
                i++;
            }while(cuantosb>-1);
            nuevo->colab=Aux;
            nuevo->actualb-=1;
        }else if(cuantosc>=0){
            Aux=(int *)malloc((cuantosc+1)*sizeof(int));
            do{
                Aux[i]=nuevo->colac[i+1];
                cuantosc--;
                i++;
            }while(cuantosc>-1);
            nuevo->colac=Aux;
            nuevo->actualc-=1;
        }
        return 1;
    }
    return 0;
}

void desplegar(struct cola *cabeza){
    int i=0, actuala=0, actualb=0, actualc=0;
    struct cola *Aux=cabeza;
    actuala=Aux->actuala;
    actualb=Aux->actualb;
    actualc=Aux->actualc;
    printf("Prioridad 1: ");
    for(i=0;i<=actuala;i++){
        printf("%d   ",Aux->colaa[i]);
    }
    printf("\nPrioridad 2: ");
    for(i=0;i<=actualb;i++){
        printf("%d   ",Aux->colab[i]);
    }
    printf("\nPrioridad 3: ");
    for(i=0;i<=actualc;i++){
        printf("%d   ",Aux->colac[i]);
    }
    printf("\n\n");
}
