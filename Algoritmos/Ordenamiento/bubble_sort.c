#include "../Utilidades/utils.h"

void bubbleSort(int *, int);

int main() {
    int arr[10];
    int n = 10;
    
    // Inicializar la semilla para números aleatorios
    srand(time(NULL));
    
    // Generar arreglo aleatorio
    llenarAleatorio(arr, n, 1, 100);
    
    // Imprimir arreglo original
    printf("Array original: ");
    imprimirArreglo(arr, n);
    
    // Ordenar arreglo
    bubbleSort(arr, n);
    
    // Imprimir arreglo ordenado
    printf("Array ordenado: ");
    imprimirArreglo(arr, n);
    
    return 0;
}

void bubbleSort(int *arr, int n) {
    if (arr == NULL || n <= 1) return;  // Validación de entrada
    
    for (int i = 0; i < n-1; i++) {
        int swapped = 0;  // Flag para optimización
        
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                intercambiar(&arr[j], &arr[j+1]);
                swapped = 1;
            }
        }
        
        if (!swapped) break;  // Si no hubo intercambios, el arreglo está ordenado
    }
}