//Program to implement Bubble sort algorithm
#include<stdio.h>

void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}
void bubbleSort(int arr[], int size){
//implementing bubble sort algorithm
	for(int i = 1; i<size; i++){
		for (int j=0; j<size-i;j++){
			if (arr[j]>arr[j+1]){
				swap(&arr[j], &arr[j+1]);
			}
		}
	}	
}
//Printing array elements
void printArray(int arr[], int size){
	printf("[");
	for (int i =0; i<size-1; i++)
		printf("%d, ", arr[i]);
	printf("%d]", arr[size-1]);
}
//Driver program
int main(){
	int arr[] = {10,8, 9, 17, 3, 2};
	int size = sizeof(arr)/sizeof(int);
	bubbleSort(arr, size);
	printArray(arr, size);
	
	return 0;
}



