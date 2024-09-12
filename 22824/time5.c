#include <stdio.h>
//Time complexity analysis ==> O(log n)
int main(){
	int n;
	scanf("%d", &n); //10
	for (int i = n; i>=1; i=i/2)
		printf("%d ",i);
	return 0;
}