//Program to implement merge sort algorithm
#include <stdio.h>
void merge(int a[], int lb, int mid, int ub){
	int n1,n2, i, j, k;
	n1 = mid - lb + 1;
	n2 = ub - mid;
	int lsa[n1], rsa[n2];
	for (i = 0; i<=mid;i++)
		lsa[i] = a[lb+i];
	for (i = mid+1, j=0; i<=ub; i++, j++)
		rsa[j] = a[i];
	
	for (i=0, j=0, k=lb; i<n1 && j < n2;k++){
		if (lsa[i]<rsa[j])
			a[k] = lsa[i++];
		else
			a[k] = rsa[j++];		
	}
	while(i<n1)
		a[k++] = lsa[i++];
	while(j<n2)
		a[k++] = rsa[j++]; 	
}
void mergeSort(int arr[], int lb, int ub){
	if (lb < ub){
		int mid = (lb + ub) / 2;
		mergeSort(arr, lb, mid); //left sub array
		mergeSort(arr, mid+1, ub); //right sub array;
		merge(arr, lb, mid, ub);		
	}
}
void printArray(int arr[], int n){
	printf("[");
	for (int i = 0; i<n-1; i++)
		printf("%d, ", arr[i]);
	printf("%d]", arr[n-1]);
}

int main(){
	int arr[] = {10,20,12,7,6,15,11};
	int size = sizeof(arr)/sizeof(arr[0]);
	mergeSort(arr, 0, size-1);
	printArray(arr, size);
	return 0;
}