#include<stdio.h>
#include "../Utilidades/utils.h"
int binarySearch(int ,int*, int);

int main (){
    int *arr, n, target;
    printf("Digita el tamanio del arreglo");
    scanf("%d",&n);
    llenarAleatorio(arr,n,1,100);
    imprimirArreglo(arr,n);

    printf("Que numero quieres buscar?");
    scanf("%d",&target);

    if(binarySearch(target,arr,n)!=-1){
        printf("La posicion de %d es %d: ",target,binarySearch(target,arr,n));
    }else{printf("Elemento no encontrado");}
    


}

int binarySearch( int target,int *arr, int n){
    int l=0, r=n-1, m=n/2;

    while(l<=r){
        if(arr[m]<target){
            l=m+1;
            m=((r-l)/2)+l;
        }else if(arr[m]>target){
            r=m-1;
            m=(r-l)/2;
        }else{
            return m;
        }
    }
    return -1;    
}