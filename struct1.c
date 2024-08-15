//Arrays ==> Collection of similar elements
//Structures ==> Collection of dissimilar elements
#include <stdio.h>
//struct <tagname/structure_name> {
//	<datatype1> <variable_name1>,
//	<datatype2> <variable_name2>,
//	....
//	....
//	<datatypeN> <variable_nameN>
//}<struct_var1>,<struct_var2>,<struct_var3>....;
//
//User Defined Datatype (UDD)

struct employee{
	int rollno; //
	char name[30];
	char gender;
	double salary;
}e1,e2;
int main(){
	printf("%lu", sizeof(struct employee));
	return 0;
}