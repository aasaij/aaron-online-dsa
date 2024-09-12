//Program to sort list of elements using qsort()
#include <stdio.h>
#include <stdlib.h>

//Ascending order
//int compare(const void *x, const void *y){
//	return *(int*)x - *(int*)y;
//}
//Descending order
int compare(const void *x, const void *y){
	return *(int*)y - *(int*)x;
}
void printArray(int arr[], int size){
	printf("[");
	for (int i = 0; i<size-1; i++)
		printf("%d, ", arr[i]);
	printf("%d]", arr[size-1]);
}
int main(){
	int arr[] = {10,12,7,9,2,21,16};
	int size = sizeof(arr)/sizeof(arr[0]);
	qsort(arr,size,sizeof(arr[0]),compare);
	printArray(arr, size);
	return 0;
}
