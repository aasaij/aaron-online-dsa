#include <stdio.h>
//function parameter and no return value
int main(){
	//function declaration or function proto-type
	void greet(char[]);
	//function calling
	greet("Sriram");
	return 0;
}

//Function definition
void greet(char user[]){
	printf("Good Evening %s!",user);
}