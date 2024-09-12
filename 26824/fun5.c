//Simple calculator using function
//function with parameters and return value
#include <stdio.h>
#include <math.h>
double eval(double x, double y, char sign){
	switch(sign){
		case '+':
			return x + y;
		case '-':
			return x - y;
		case 'x' : case 'X': case '*':
			return x * y;
		case '/':
			return x / y;
		case '%':
			return fmod(x,y);
	}
}

int main(){
	double n1, n2, res; 
	char sign;
	// 10 + 20  ===> 10 + 20 
	scanf("%lf %c %lf", &n1, &sign, &n2);
	res = eval(n1,n2,sign);
//	printf("%.2lf %c %.2lf = %.2lf\n",n1, sign, n2, eval(n1, n2, sign));
//	printf("%g %c %g = %g\n",n1, sign, n2, eval(n1, n2, sign));
	if ((long)n1 == n1 && (long)n2 == n2 && (long)res==res){
		printf("%ld %c %ld = %ld", (long)n1,sign, (long)n2, (long)res);
	}
	else
		printf("%.2lf %c %.2lf = %.2lf\n",n1, sign, n2, eval(n1, n2, sign));
		
	return 0;
}
