//Program to demonstrate Structures
//Array of structures
#include <stdio.h>
typedef struct Student{
	int rollno;
	char name[25];
	double cgpa;
}student;
void printline(int n){
	for (int i = 1; i<=n; i++)
		printf("*");
	printf("\n");
}

int main(){
	student s[5]; //Array of structures
	//Getting values of 5 students data
	for (int index = 0; index<5; index++){
		scanf("%d %s %lf",&s[index].rollno, s[index].name, &s[index].cgpa);
	}
	//Printing 5 students data
	printline(38);
	printf("Rollno %-25s CGPA\n","Student Name");
	printline(38);
	for (int i = 0; i<5; i++){
		printf("%-6d %-25s %.2lf\n", s[i].rollno, s[i].name, s[i].cgpa);
	}
	printline(38);
	
	return 0;
}
//**************************
//RollNo Student Name   CGPA
//  6   1  25         1  5
//**************************
//101    AAA            10.00
//**************************