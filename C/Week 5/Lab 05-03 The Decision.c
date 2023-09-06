#include <stdio.h>

int main() {
	int c1, c2;
	scanf("%d\n%d", &c1, &c2);
	if (c1 >= c2) {
		while (c1 >= c2) {
			printf("%d ", c1);
			c1--;
		}
	} else {
		while (c1 <= c2) {
			printf("%d ", c1);
			c1++;
		}
	}

	return 0;
}