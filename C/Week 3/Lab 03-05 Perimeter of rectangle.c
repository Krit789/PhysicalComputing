#include <stdio.h>

int main(){
	double a, b;
	scanf("%lf\n%lf", &a, &b);
	printf("Perimeter of rectangle = %.4lf units", a * 2 + b * 2);
	return 0;
}