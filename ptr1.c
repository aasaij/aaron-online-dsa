//Program to demonstrate pointers
#include <stdio.h>
//Pointer used to point something
//Pointer also occupies memory
int main(){
	int x, *ptr;
	x = 10;
//	printf("%p", &x); //prints the address of x
//	printf("\n%d", x); //prints the value of x
//	printf("\n%d", *(&x)); //prints the value of x
	ptr = &x;
	*ptr = 100;
	printf("%d", x);
	return 0;
}
//Operators used in pointers
//& --> Address operator
//* --> Indirection or dereference or value at operator
//->  --> structure pointer member accessing operator
