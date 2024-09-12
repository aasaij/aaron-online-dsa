#include <stdio.h>
//function parameters and no return value
int main(){
	//function declaration or function proto-type
	void greet(char user[], char gender);
	char list[][20] = {"Sriram", "Jeyanth", "Harshavarthini", "Vijayalakshmi"};
	char genders[] = {'M','M','F','F'};
	//function calling
	for (int i = 0; i<4; i++)
		greet(list[i],genders[i]);
	return 0;
}

//Function definition
void greet(char user[], char gender){
	char *title;
	if (gender=='F' || gender == 'f')
		title = "Ms. ";
	else if (gender=='M' || gender=='m')
		title = "Mr. ";
	else
		title="";
		
	printf("Good Evening %s%s!\n",title,user);
}