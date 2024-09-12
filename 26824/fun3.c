#include <stdio.h>
//function parameter and no return value
int main(){
	//function declaration or function proto-type
	void greet(char[]);
	char list[][20] = {"Sriram", "Jeyanth", "Harshavarthini", "Vijayalakshmi"};
	//function calling
	for (int i = 0; i<4; i++)
		greet(list[i]);
	return 0;
}

//Function definition
void greet(char user[]){
	printf("Good Evening %s!\n",user);
}