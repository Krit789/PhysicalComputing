#include <stdio.h>

int main() {
	double a, b;
	scanf("%lf,%lf", &a, &b);
	printf("The sum of the given numbers : %lf\n", a + b);
	printf("The difference of the given numbers : %lf\n", a - b);
	printf("The product of the given numbers : %lf\n", a * b);
	printf("The quotient of the given numbers : %lf", a / b);
	return 0;
}