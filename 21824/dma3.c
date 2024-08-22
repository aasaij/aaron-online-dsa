#include <stdio.h>
#include <stdlib.h>
//program to demonstrate malloc() 
int main(){
	int *arr, size;
	scanf("%d", &size); // arr[size]
	//allocating size * sizeof(int) bytes dynamically
	arr = (int *)malloc(size * sizeof(int));
	arr[0] = 100;
	arr[1] = 200;
	arr[2] = 300;
	return 0;
}