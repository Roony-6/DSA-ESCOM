#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../Utilidades/utils.h"

void insertionSort(int *, int);

int main() {
    int arr[10];
    int n = 10;
    
    // Inicializar semilla para números aleatorios
    srand(time(NULL));
    
    // Generar y mostrar arreglo original
    llenarAleatorio(arr, n, 1, 100);
    printf("Array original: ");
    imprimirArreglo(arr, n);
    
    // Ordenar arreglo
    insertionSort(arr, n);
    
    // Mostrar resultado
    printf("Array ordenado: ");
    imprimirArreglo(arr, n);
    
    return 0;
}

void insertionSort(int *arr, int n) {
    if (arr == NULL || n <= 1) return;
    
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        // Mover elementos mayores que key
        // una posición adelante
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}