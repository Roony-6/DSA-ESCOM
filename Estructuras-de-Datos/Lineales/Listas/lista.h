#include<stdio.h>
#include<stdlib.h>

typedef int Elem;
typedef struct Nodo{
    Elem dato;
    struct Nodo *siguiente;    
}*Lista;

//Constructoras:

Lista vacia(){return NULL;}

Lista cons(Elem e, Lista l){
    Lista tmp=(Lista)malloc(sizeof(Nodo));
    tmp->dato=e;
    tmp->siguiente=l;
    return tmp;
}

//Observadoras:

int esVacia(Lista l){
    return (l==NULL);
}

Elem cabeza(Lista l){
    if (esVacia(l)) {
        printf("Error: lista vacía (cabeza)\n");
        exit(1);
    }
    return l->dato;
}

//Destructora:

Lista resto(Lista l){
    if (esVacia(l)) {
        printf("Error: lista vacía (resto)\n");
        exit(1);
    }
    Lista tmp = l->siguiente; // apuntar al segundo nodo
    free(l);                  // liberar el primero
    return tmp;               // devolver la lista sin la cabeza
}

