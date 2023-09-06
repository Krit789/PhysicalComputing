#include <stdio.h>

int main(){
	float a, b, c, d;
	scanf("%f\n%f\n%f\n%f", &a, &b, &c, &d);
	printf("Summation is %.2f\nAverage is %.3f", a+b+c+d, (a+b+c+d)/4);
	return 0;
}