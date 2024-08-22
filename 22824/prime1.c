//Program to check whether the given number is prime or not
#include <stdio.h>
int main(){
	int x, f=0;
	scanf("%d", &x);
	//Method 1
	if (x == 1)
		printf("Neither prime not composite");
	else{
		for (int i = 1; i<=x; i++){
			if (x % i == 0)
				f++;
		}
		if (f==2)
			printf("Prime");
		else
			printf("Not Prime");
	}
	return 0;
}