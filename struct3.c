#include <stdio.h>
//Structure definition
struct employee{
	int id; // 4
	char name[15]; // 15
//	char *name;
	double salary; // 8
};
int main(){
	//Structure variable declaration
	struct employee emp1 = {101, "Gayathri",300000.0D};
	struct employee emp2 = {102	};
	struct employee emp3 = {.salary = 700000};
	struct employee emp4 = {.name = "Harshavardhini",.salary = 1000000,.id=107	};
	printf("\n%lu", sizeof(struct employee));
	return 0;
}