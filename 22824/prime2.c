//Program to check whether the given number is prime or not
#include <stdio.h>
int main(){
	int x;
	scanf("%d", &x);
	//Method 2
	if (x == 1)
		printf("Neither prime not composite");
	else{
		for (int i = 2; i<x; i++){
			if (x % i == 0){
				printf("Not Prime");
				return 0;// exit(0);	
			}	
		}
		printf("Prime");
	}
	return 0;
}