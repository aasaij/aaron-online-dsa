#include <stdio.h>
#include <string.h>
//Structure definition
struct employee{
	int id;
//	char name[20];
	char *name;
	double salary;
};
int main(){
	//Structure variable declaration
	struct employee e1, e2, e3 = {101, "Gayathri",300000.0D};
	
	//Accessing structure members
	e1.salary = 400000;
	e1.name = "Divya"; //Immutable string
//	e1.name[0] = 'N';
//	e1.name = "Vijayalakshmi";
//	strcpy(e1.name,"Divya"); //Mutable
	e2.salary = 500000.0f;
//	strcpy(e2.name, "Harsha");
	e2.name = "Harsha";
	printf("%s %.2lf %s %.2lf %s %.2lf",e1.name,e1.salary, e2.name,e2.salary, e3.name,e3.salary);
	return 0;
}