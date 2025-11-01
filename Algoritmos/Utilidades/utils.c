#include "utils.h"

void imprimirArreglo(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d" );
    }
};
void llenarAleatorio(int arr[], int n, int min, int max){
    if(n <= 0) return;
    if(max < min){ int t = min; min = max; max = t; }
    int range = max - min + 1;
    for(int i = 0; i < n; ++i){
        arr[i] = (rand() % range) + min;
    }

};

void intercambiar(int *a, int *b){
    if (a == NULL || b == NULL) return;
    if (a == b) return;
    int tmp = *a;
    *a = *b;
    *b = tmp;
};

int numeroAleatorio(int min, int max){
    if(max < min){ int t = min; min = max; max = t; }
    int range = max - min + 1;
    return (rand() % range) + min;
}