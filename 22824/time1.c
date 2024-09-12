//Program to check whether the given number is positive or negative
#include <stdio.h>
//Time complexity analysis => O(1)
int main(){
	int x;
	scanf("%d", &x);
	if (x >= 0)
		printf("+ve");
	else
		printf("-ve");
	
	return 0;
}