#include <stdio.h>
#include <stdlib.h>
long length(char str[]){
	long len;
	for (len=0; str[len++];);
	return --len;
}
char *substring(char str[], int startIndex, int numChars){
	char *temp;
	long size = length(str) - startIndex;
	size = size < numChars ? size:numChars;
	temp = (char *)calloc(size+1,sizeof(char));
	for (int i = startIndex, j=0; j<size &&str[i]!='\0';i++,j++)
		temp[j] = str[i];
	return temp;
}
int main(){
//	printf("%ld", length("Divya"));
	printf("%s", substring("sriram",2, 4)); // sri
	return 0;
}