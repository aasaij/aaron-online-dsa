//Program to demonstrate pointers
#include <stdio.h>

int main(){
	int x = 10, *ptr;
	ptr = &x;
	printf("%p\n", ptr);
	*ptr++ = 100;
	printf("%p\n", ptr);
	printf("%d\n", x);
	printf("%d\n", *ptr);

	return 0;
}