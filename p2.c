#include <stdio.h>

int main(){
	int x = 10, y , z;
	y = x++; // y = x; x = x+1
	z = ++x + y++;
	printf("%d %d %d", x,y,z);
	return 0;
}