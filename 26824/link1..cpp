//Program to demonstrate Linked list 
#include <stdio.h>
typedef struct Node{
	int data;
	int *ptr;
}node;

int main(){
	node x;
	x.data = 100;
	x.ptr = &x.data;
	return 0;
}