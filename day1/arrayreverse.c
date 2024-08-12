#include <stdio.h>
//Program to reverse an array
int main(){
	int arr[] = {10,20,30,12,15,7};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0, j=size-1;i<size/2;i++, j-- ){
		//swapping of left and right values 
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	//printing array elements
	for (int i =0; i<size; i++)
		printf("%d ", arr[i]);
	return 0;
}
