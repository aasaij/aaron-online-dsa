//Program to implement selection sort algorithm
#include <stdio.h>
void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}
//implementing selection sort algorithm
void selectionSort(int arr[], int size){
	for (int i = 0; i<size; i++){
		//minIndex stores the minimum element index
		int minIndex = i;
		//searching minimum element index
		for (int j = i+1; j<size; j++){
			if (arr[minIndex]>arr[j]){
				minIndex = j;
			}
		}
		//checking whether minimum value is there on the right side or not
		if (minIndex != i){
			//if it is there then swap minIndex with ith element
			swap(&arr[minIndex], &arr[i]);
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
int main(){
	int arr[] = {10, 12, 7, 4, 21, 9};
	int size = sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr, size);
	printArray(arr, size);
	return 0;
}