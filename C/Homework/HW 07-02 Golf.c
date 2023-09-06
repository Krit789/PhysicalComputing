#include <stdio.h>
#include <math.h>
#define g 9.81
#define PI 3.141592653589793

double h(int theta, int initV);
double radToDeg(int rad);

int main(){
	int theta, initV;
	scanf("%d\n%d", &theta, &initV);
	printf("theta (degree) : %d\nu (m/s) : %d\nh (m) : %.4lf", theta, initV, h(theta, initV));
	return 0;
}

double h(int theta, int initV){
	return (pow(initV, 2) * pow(sin(radToDeg(theta)), 2)) / (2 * g);
}

double radToDeg(int rad){
	return (rad * PI) / 180;
}