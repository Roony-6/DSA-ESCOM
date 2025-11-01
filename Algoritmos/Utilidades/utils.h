#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Prototipos de funciones de utilidad

/**
 * Imprime los elementos de un arreglo
 * @param arr Arreglo de enteros a imprimir
 * @param n Tamaño del arreglo
 */
void imprimirArreglo(int arr[], int n);

/**
 * Llena un arreglo con números aleatorios
 * @param arr Arreglo a llenar
 * @param n Tamaño del arreglo
 * @param min Valor mínimo del rango
 * @param max Valor máximo del rango
 */
void llenarAleatorio(int arr[], int n, int min, int max);

/**
 * Intercambia dos valores enteros
 * @param a Puntero al primer valor
 * @param b Puntero al segundo valor
 */
void intercambiar(int *a, int *b);

/**
 * Genera un número aleatorio en un rango
 * @param min Valor mínimo del rango
 * @param max Valor máximo del rango
 * @return Número aleatorio entre min y max
 */
int numeroAleatorio(int min, int max);

#endif
