#include <stdio.h>

int main(){
	char str[100] = "Divya", *ptr;
	ptr = str;
	while(*ptr)
		printf("%c ", *ptr++);
	return 0;
}