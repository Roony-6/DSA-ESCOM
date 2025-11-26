#include<stdio.h>
#include<stdlib.h>
#include "../Listas/lista.h"

//STACK implementation using LINKED LIST
typedef Lista Pila;

//CONSTRUCTORAS

Pila empty(){return vacia();}

Pila push(Elem e, Pila p){return cons(e,p);}

//OBSERVADORAS
int isEmpty(Pila p){return esVacia(p);}

Elem top(Pila p){return cabeza(p);}

//DESTRUCTORAS
Pila pop(Pila p){return resto(p);}

