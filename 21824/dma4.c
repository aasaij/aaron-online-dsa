#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr, size=5;
    arr = (int *)calloc(size,sizeof(int));
    arr[0] = 100;
    arr[1] = 200;
    arr[2] = 300;
    size = 10;
    arr= (int *)realloc(arr, size * sizeof(int));
    arr[7] = 700;
    free(arr);
    return 0;
}