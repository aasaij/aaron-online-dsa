#include <stdio.h>
//Time complexity analysis ==> O(log n)
int main(){
	int n;
	scanf("%d", &n); //10
	for(int i = 2; i<=n; i= i*i)
		printf("%d ", i); //2 4
	return 0;
}