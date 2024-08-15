#include <stdio.h>
//Program to merge two sorted arrays
int main(){
	int arr1[] = {1,2,3,4,5}, i, j, k;
	int arr2[] = {3,4,7,9,12, 22,33};
	int n1 = sizeof(arr1) / sizeof(arr1[0]);
	int n2 = sizeof(arr2) / sizeof(arr2[0]);
	int merge[n1+n2];
	//Merging of two sorted arrays
	for (i=j=k=0;i<n1 && j < n2; k++){
		//checking both array elements
		if (arr1[i]<arr2[j]){
			//if first array element is less than second array element
			merge[k]=arr1[i++];
		}
		else
		//other second array element is lesser than first array element
		merge[k]=arr2[j++];
	}
	//adding remaining elements of first array into merged array if there are elements
	while (i<n1)
		merge[k++] = arr1[i++];
	//adding remaining elements of second array into merged array if there are elements
	while (j<n2)
		merge[k++] = arr2[j++];
	//Printing the merged array
	for (int i = 0; i<n1+n2; i++)
		printf("%d ", merge[i]);
	return 0;
}