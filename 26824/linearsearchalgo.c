//Program to implement linear search algorithm
/*
1. Linear Search ==> O(n) ==> can be applied in any list
MS ==> O(n log n)
2. Binary Search ==> O(log n) ==> can be applied only on sorted elements
*/
#include <stdio.h>
#include <stdbool.h>
bool linearSearch(int arr[], int n, int search){
	for (int i = 0; i<n; i++){
		if (arr[i]==search)
			return true;
	}
	return false;
}
int main(){
	int arr[] = {10,19,21,14,17,19};
	int size = sizeof(arr)/sizeof(arr[0]), key =19;
	if (linearSearch(arr, size, key))
		printf("Found");
	else
		printf("Not Found"); 
	return 0;
}