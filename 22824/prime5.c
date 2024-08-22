//Program to check whether the given is prime or not
#include <stdio.h>

int main(){
	int x;
	scanf("%d", &x);
	if ( x == 1)
		printf("Neither prime nor composite");
	else if (x > 3 &&(x % 2 == 0 || x % 3 ==0)){
		printf("Not Prime");
	}
	else{
		for (int i=5; i*i<=x; i+=6){
			if (x % i ==0||x %(i+2)==0){
				printf("Not Prime");
				return 0;
			}
		}
		printf("Prime");
	}
	return 0;
}

//5 7   11 13   17 19  23 29 31.....
//Twin prime numbers
//Difference between two prime numbers should be 2