//Program to implement binary search algorithm using recursion
#include <stdio.h>
#include <stdbool.h>
bool binarySearch(int arr[], int lb, int ub, int search){
	if (lb<=ub){
		int mid = (lb+ub)/2;
		if ( arr[mid]==search)
			return true;
		else if (arr[mid]>search)
			binarySearch(arr, lb, mid-1, search);
		else
			binarySearch(arr, mid+1, ub, search);
	}
	else
	return false;
}

int main(){
	int arr[] = {10,14,17,19,21,31};
	int size = sizeof(arr)/sizeof(arr[0]), key =24;
	if (binarySearch(arr, 0, size-1, key))
		printf("Found");
	else
		printf("Not Found"); 
	return 0;
}