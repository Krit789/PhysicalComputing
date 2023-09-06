#include <stdio.h>

int main(){
	int t_age, t_height, t_weight;
	int c1 = 0, c2 = 0, c3 = 0, c4 = 0, avgAge = 0;
	float avgHeight = 0, avgWeight = 0;
	for (int i = 0; i < 50; i++){
		t_age = 0, t_height = 0, t_weight = 0;
		scanf("%d %d %d", &t_age, &t_height, &t_weight);
		if (t_age >= 20 && t_height >= 160)
			c1++;
		if (t_age < 20 && (t_height <= 180 || t_weight >= 60))
			c2++;
		if (t_age >= 30 && t_weight >= 40 && t_weight <= 80)
			c3++;
		if (t_age < 40 && (t_weight < 85 || t_height <= 200))
			c4++;
		avgAge += t_age;
		avgHeight += t_height;
		avgWeight += t_weight;
	}
	printf("Age >= 20 and Height >= 160: %d\n", c1);
	printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", c2);
	printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", c3);
	printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", c4);
	printf("Average Age: %d\n", avgAge / 50);
	printf("Average Height: %.2f\n", avgHeight / 50.0);
	printf("Average Weight: %.2f", avgWeight / 50.0);
	return 0;
}