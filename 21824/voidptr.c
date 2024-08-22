#include <stdio.h>
//Program to demonstrate void pointer
struct student{
	int rollno;
	char name[20];
};
int main(){
	int x = 20;
	float y = 30.9;
	char z = 'A';
	struct student s={101,"Sriram"};
	void *ptr;
	ptr = &x;
	printf("%d\n", *(int*)ptr); //type casting
	ptr = &y;
	printf("%.2f\n", *(float*)ptr);
	ptr = &z;
	printf("%c\n", *(char*)ptr);
	ptr = &s;	
	printf("%d %s\n", (*(struct student*)ptr).rollno,(*(struct student*)ptr).name);
	return 0;
}