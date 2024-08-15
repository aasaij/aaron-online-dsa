//Program to demonstrate Structures

#include <stdio.h>
typedef struct Student{
	int rollno;
	char name[30];
	double cgpa;
}student;

//creating alias to integer
//typedef int mark;
//typedef struct student stu;

int main(){
//	mark c, java, python;
//	stu s;
	student s1, s2;
	struct Student s3;
	scanf("%d %s %lf", &s1.rollno, s1.name, &s1.cgpa);
	scanf("%d %s %lf", &s2.rollno, s2.name, &s2.cgpa);
	scanf("%d %s %lf", &s3.rollno, s3.name, &s3.cgpa);
	
	printf("%d %s %.2lf\n", s1.rollno, s1.name, s1.cgpa);
	printf("%d %s %.2lf\n", s2.rollno, s2.name, s2.cgpa);
	printf("%d %s %.2lf\n", s3.rollno, s3.name, s3.cgpa);
	return 0;
}