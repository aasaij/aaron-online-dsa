#include <stdio.h>
int main(){
	int arr[5] = {10,20,30,40,50};
	int *ptr = arr; // int *ptr = &arr[0]
//	printf("%d", *arr);
	printf("%d", *ptr);
//	printf("\n%p",  arr);
	printf("\n%p", ptr);
//	arr += 2;
	ptr += 2;
//	printf("\n%d", *ptr);
	printf("\n%d", ptr[0]);
	printf("\n%d", ptr[-1]);
	ptr++;
	printf("\n%d", ptr[0]);
	printf("\n%d", ptr[-3]);
	return 0;
}