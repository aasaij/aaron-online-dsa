#include <stdio.h>
//function without parameter and no return value
int main(){
	//function declaration
	void greet();
	//function calling
	greet();
	return 0;
}

//Function definition
void greet(){
	printf("Good Evening!");
}