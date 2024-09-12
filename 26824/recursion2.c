#include <stdio.h>

void print(int n){
	if (n <= 0)
		return;
	print(n-1); // Head recursion
	printf("%d ", n);
	print(n-1); //Tail recursion
}

int main(){
	int x;
	scanf("%d", &x);
	print(x);
	return 0;
}