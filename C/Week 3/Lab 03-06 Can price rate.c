#include <stdio.h>

int main(){
	double price, diameter, height, volume;
	scanf("%lf\n%lf\n%lf", &price, &diameter, &height);
	volume = height * 3.14159265359 * (diameter / 2) * (diameter / 2);
	printf("Volume : %.2lfml\n", volume);
	printf("Baht/ml : %.4lf", price / volume);
	return 0;
}