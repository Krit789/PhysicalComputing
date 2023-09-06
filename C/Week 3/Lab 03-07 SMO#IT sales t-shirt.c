#include <stdio.h>

int main(){
	double origPrice, percentDiscount, amount;
	scanf("%lf\n%lf\n%lf", &origPrice, &percentDiscount, &amount);
	printf("%.2lf", (origPrice * ((100 - percentDiscount)/100)) * amount);
	return 0;
}