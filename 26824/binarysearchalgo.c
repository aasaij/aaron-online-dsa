//Program to implement binary search algorithm using iteration
#include <stdio.h>
#include <stdbool.h>
bool binarySearch(int arr[], int n, int search){
	int lb = 0, ub = n-1;
	while (lb <=ub){
		int mid = (lb + ub) /2;
		if ( arr[mid] == search)
			return true;
		else if (arr[mid] > search)
			ub = mid - 1;
		else
			lb = mid + 1;
	}	
	return false;
}

int main(){
	int arr[] = {10,14,17,19,21,31};
	int size = sizeof(arr)/sizeof(arr[0]), key =14;
	if (binarySearch(arr, size, key))
		printf("Found");
	else
		printf("Not Found"); 
	return 0;
}