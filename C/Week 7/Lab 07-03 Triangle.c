#include <stdio.h>
#include <math.h>

double perimeter(double sideA, double sideB);
double area(double height, double width);

int main(){
	double sideA, sideB;
	scanf("%lf\n%lf", &sideA, &sideB);
	printf("Perimeter: %.2lf\nArea: %.2lf", perimeter(sideA, sideB), area(sideA, sideB));
	return 0;
}

double perimeter(double sideA, double sideB){
	return sideA + sideB + sqrt(sideA*sideA + sideB*sideB);
}

double area(double height, double width){
	return (0.5) * width * height;
}