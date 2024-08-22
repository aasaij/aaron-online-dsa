//Program to demonstrate pointers
#include <stdio.h>
struct test{
	int rollno;
	char name[30];
	double cgpa;
};
int main(){
//	int x, *ptr, y=20;
//	x = 10;
//	ptr = &x;
//	*ptr = 100;
//	ptr = &y;
//	*ptr = 200;
//	printf("%d %d", x, y);
//	printf("%d", *ptr);
	printf("%lu", sizeof(int*));
	printf("\n%lu", sizeof(char*));
	printf("\n%lu", sizeof(struct test*));
	return 0;
}