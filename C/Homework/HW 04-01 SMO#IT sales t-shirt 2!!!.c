#include <stdio.h>

int main(){
	float price;
	int promoPercent, amount;
	scanf("%f\n%d\n%d", &price, &promoPercent, &amount);
	float m1 = (price  * amount) * (((100 - promoPercent)/100.0)); // Percent Off
	int m2a = amount / 3; // Buy 2 Get 1 Free
	float m2 = (amount - m2a) * price;
	if (m1 < m2 || m1 == m2){
		printf("Discount %d%%\n%.2f", promoPercent,m1);
	} else {
		printf("Buy 2 Get 1\n%.2f", m2);
	}
	return 0;
}