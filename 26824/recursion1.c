//Iterative or Recursive
#include <stdio.h>

void print(int n){
	if (n==0)
		return;
	printf("%d ", n);
	print(n-1);
}

int main(){
	int x;
	scanf("%d", &x);
//	for (int i = 1;i<=x; i++)
//		printf("%d ", i);
	print(x);
	return 0;
}

Recursion

void print(5){
	if (5==0)
		return;
	printf("%d ", 5); // 5
	print(5-1);
}

void print(4){
	if (4==0)
		return;
	printf("%d ", 4); // 4
	print(4-1);
}

void print(3){
	if (3==0)
		return;
	printf("%d ", 3); // 3
	print(3-1);
}

void print(2){
	if (2==0)
		return;
	printf("%d ", 2); // 2
	print(2-1);
}
void print(1){
	if (1==0)
		return;
	printf("%d ", 1); // 1
	print(1-1);
}

void print(0){
	if (0==0)
		return;

}













