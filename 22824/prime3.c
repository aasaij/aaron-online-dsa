//Program to check whether the given number is prime or not
#include <stdio.h>
#include <stdlib.h>
int main(){
	int x;
	scanf("%d", &x);
	//Method 3
	if (x == 1)
		printf("Neither prime not composite");
	else{
		for (int i = 2; i<=x/2; i++){
			if(x % i == 0){
				printf("Not Prime!");
				exit(0);
			}
		}
		printf("Prime");
	}
	return 0;
}