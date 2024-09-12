//Program to print sum of natural numbers using recursion
#include <stdio.h>
unsigned long sum(int n){
	if (n==1)
		return 1;
	return n + sum(n-1);
}

int main(){
	int x;
	scanf("%d", &x);
	printf("%lu", sum(x));
	return 0;
}