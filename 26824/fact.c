//Program to print factorial of N using recursion
#include <stdio.h>

unsigned long fact(int n){
	if ( n ==0 || n == 1)
		return 1;
	return n * fact(n-1);
}

int main(){
	int x;
	scanf("%d", &x);
	printf("%lu",fact(x));
	return 0;
}