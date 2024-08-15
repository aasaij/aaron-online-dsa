#include <stdio.h>

//typedef struct Date {
//	int dd, mm, yy;
//}date;
//typedef struct Student{
//	int rollno;
//	char name[25];
//	double cgpa;
//	//Structure within structure
//	date dob;
//}student;
typedef struct Student{
	int rollno;
	char name[25];
	double cgpa;
	//Structure within structure
	struct {
		int dd, mm, yy;
	}dob;
}student;
int main(){
	student s1 = {101, "AAA",10.0, {8,7,2024}};
	struct date d1;
	printf("RollNo : %d\n", s1.rollno);
	printf("Name   : %s\n",s1.name);
	printf("CGPA   : %.2lf\n", s1.cgpa);
	printf("Date of Birth : %d/%d/%d\n", s1.dob.dd, s1.dob.mm, s1.dob.yy);
	return 0;
}