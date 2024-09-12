//Program to sort list of structures using qsort()
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Student{
	int rollno;
	char name[30];
	double cgpa;
}student;
//Sorting by rollno
//int comparator(const void *s1, const void *s2){
//	return ((student*)s1)->rollno - ((student*)s2)->rollno;
//}
//Sort by names
//int comparator(const void *s1, const void *s2){
//	return strcmp(((student*)s1)->name, ((student*)s2)->name);
//}
//Sort by cgpa
int comparator(const void *s1, const void *s2){
//	return ((student*)s1)->cgpa - ((student*)s2)->cgpa;
	if (((student*)s1)->cgpa > ((student*)s2)->cgpa)
		return 1;
	else if (((student*)s1)->cgpa < ((student*)s2)->cgpa)
		return -1;
	else
		return 0;
}
void printStudents(student s[], int n){
	printf("[\n");
	for (int index = 0; index<n-1; index++){
		printf("{%3d, %-15s, %4.1lf},\n", s[index].rollno,s[index].name,s[index].cgpa);
	}
	printf("{%3d, %-15s, %4.1lf}\n]", s[n-1].rollno,s[n-1].name,s[n-1].cgpa);
}
int main(){
	student s[] = {
					{120, "Divya", 10.0},
					{101, "Sriram", 10.0}, 
					{71, "Jeyanth", 10.0}, 
					{55, "Madhavan", 7.9}, 
					{210, "Nazer Mohamed", 8.5},
					{201, "Amar", 9.5}
				};
	int size = sizeof(s)/sizeof(s[0]);
	qsort(s,size, sizeof(student), comparator);
	printStudents(s, size);
	return 0;
}