#include <stdio.h>

int main(){
	int arr[] = {1,2,3,45,67}, *ptr;
	ptr = arr+4;
	printf("%d", arr[-1]);
	return 0;
}