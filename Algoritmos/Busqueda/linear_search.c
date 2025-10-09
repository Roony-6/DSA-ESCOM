#include <stdio.h>

int linearSearch(int, int, int *);

int main(){

    return 0;
}

int linearSearch(int target, int n, int arr*){
    for(int i=0;i<n;i++){
        if (arr[i]== target)
            return i;
    }
    return -1;
}