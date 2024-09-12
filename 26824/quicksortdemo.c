//Program to implement quick sort algorithm
#include <stdio.h>
void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}
int partition(int a[], int lb, int ub){
	int pivot = a[lb];
	int start = lb, end = ub;
	while (start < end){
		while (a[start]<=pivot)
			start++;
		while (a[end]>pivot)
			end--;
		if ( start < end){
			swap(a+start, a+end);
		}
	}
	swap(a+lb, a+end);
	return end;
}
void quickSort(int a[], int lb, int ub){
	if (lb < ub){
		int mid = partition(a, lb, ub);
		quickSort(a, lb, mid-1);
		quickSort(a, mid+1, ub);
	}
}
void printArray(int a[], int n){
	printf("[");
	for (int i=0; i<n-1; i++)
		printf("%d, ", a[i]);
	printf("%d]", a[n-1]);
}
int main(){
	int arr[] = {10, 80, 30, 90, 40};
	int size = sizeof(arr)/sizeof(arr[0]);
	quickSort(arr, 0, size-1);
	printArray(arr, size);
	return 0;
}