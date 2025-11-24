#include<stdio.h>
#include<stdlib.h>

//Implementacion Pila
typedef int Elem;
typedef struct nodo{
    Elem dato;
    nodo *siguiente;
}*Pila;


//Constructoras:

Pila empty(){return NULL;}

Pila push(Elem e, Pila p){
    Pila tmp=(Pila)malloc(sizeof(struct nodo));
    tmp->dato=e;
    tmp->siguiente=p;
    return tmp;
}

//Observadoras

int isEmpty(Pila p){return (p==empty());}

Elem top(Pila p){return p->dato;}

//Destructora

Pila pop(Pila p){
    return p->siguiente;
}