#include <stdio.h>
//Program to find second least value from a list of values
int main(){
	int arr[] = {10,20,30,12,15,7};
	int size = sizeof(arr)/sizeof(arr[0]), min;
	min = arr[0];
	
	for (int i = 1; i<size; i++){
		if (min > arr[i])
			min = arr[i];
	}
	printf("%d", min);	
	
	return 0;
}
