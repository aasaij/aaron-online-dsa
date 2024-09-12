//Program to implement insertionSort algorithm
#include <stdio.h>
void insertionSort(int arr[], int n){
	for (int i = 1; i<n; i++){
		int j=i-1, key = arr[i];
		while (j>=0 && key < arr[j]){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}
void printArray(int arr[], int size){
	printf("[");
	for (int i = 0; i<size-1; i++)
		printf("%d, ", arr[i]);
	printf("%d]", arr[size-1]);
}
int main(){
	int arr[] = {10,11,7,4,3,2,9,21};
	int size = sizeof(arr)/sizeof(arr[0]);
	insertionSort(arr, size);
	printArray(arr, size);
	return 0;
}