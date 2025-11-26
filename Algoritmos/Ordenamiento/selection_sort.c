#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../Utilidades/utils.h"

void selectionSort(int *arr, int n);

int main(void) {
    int n = 10;
    int arr[10];

    srand((unsigned)time(NULL));

    llenarAleatorio(arr, n, 1, 100);
    printf("Array original: ");
    imprimirArreglo(arr, n);

    selectionSort(arr, n);

    printf("Array ordenado: ");
    imprimirArreglo(arr, n);

    return 0;
}

void selectionSort(int *arr, int n) {
    if (arr == NULL || n <= 1) return;

    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) min_idx = j;
        }
        if (min_idx != i) {
            intercambiar(&arr[i], &arr[min_idx]);
        }
    }
}