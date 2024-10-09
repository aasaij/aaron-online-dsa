//Program to match parantheses
#include <stdio.h>
#include <stdlib.h>

int main(){
	char str[100], *stack, *ch;
	int length, top=-1;
	scanf("%s%n", str, &length);
//	scanf("%d%n", &n, &length);
//	printf("%d", length);
	stack = (char*)calloc(length+1, sizeof(char));
	ch = str;
	while (*ch!='\0'){
		//checking whether the character is opening curly brace, square bracket and parantheses
		if (*ch =='{' || *ch == '[' || *ch=='(') // is so add into the stack
			stack[++top]=*ch;
		else{ //otherwise
			if (*ch == ')' && stack[top]=='('){
				top--;
			}
			else if (*ch==']' && stack[top]=='[')
			{
				top--;
			}
			else if (*ch =='}' && stack[top]=='{'){
				top--;
			}
			else{
				printf("No match");
				return 0;
			}				
		}
		ch++;
	}
	if (*ch == '\0' && top==-1)
		printf("Match");
	else
		printf("No Match");
	return 0;	
}

 