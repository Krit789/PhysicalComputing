#include <stdio.h>

int main() {
	int sumof = 0, temp = 0;
	while (1) {
		scanf("%d", &temp);
		if (temp == -9) break;
		sumof += temp;
	}
	printf("%d", sumof);
	return 0;
}