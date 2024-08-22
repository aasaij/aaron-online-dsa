//Program to check whether the given number is prime or not
#include <stdio.h>
#include <stdlib.h>
//#include <math.h>
int main(){
	int x;
	scanf("%d", &x);
	//Method 4
	if (x == 1)
		printf("Neither prime not composite");
	else{
//		for (int i = 2; i<=sqrt(x); i++){
		for (int i = 2; i*i<=x; i++){
			if(x % i == 0){
				printf("Not Prime!");
				exit(0);
			}
		}
		printf("Prime");
	}
	return 0;
}
//100 ==> <=10 ==> 2,4,5,10
//29  ==> <= 5 ==>
//25  ==> <=5  ==> 5