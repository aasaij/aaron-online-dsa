//Program to print a string using recursion
#include <stdio.h>

void reverse(char *s){
	if (*s=='\0')
		return;
	reverse(s+1);
	printf("%c", *s);
}

int main(){
	char str[100];
	scanf("%s", str);
	reverse(str);
	return 0;
}