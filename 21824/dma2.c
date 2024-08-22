#include <stdio.h>
#include <stdlib.h>
struct student{
	int rollno;
	char name[20];
};
int main(){
	struct student *s;
	s = (struct student *)malloc(sizeof(struct student));
	return 0;
}