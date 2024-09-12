//Program to sort list of names using qsort()
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void *s1, const void *s2){
	return strcmp(s2, s1);
}
void printList(char names[][20], int size){
	printf("[");
	for (int i = 0; i<size-1; i++)
		printf("%s, ", names[i]);
	printf("%s]", names[size-1]);
}
int main(){
	char names[][20] = {"Harsha", "Sriram","Vijaya", "Jeyanth", "Divya","Aasai"};
	char size = sizeof(names)/sizeof(names[0]);
	qsort(names, size, sizeof(names[0]),compare);
	printList(names, size);
	return 0;
}