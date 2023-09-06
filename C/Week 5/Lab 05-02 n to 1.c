#include <stdio.h>

int main() {
	int count;
	scanf("%d", &count);
	do {
		printf("%d ", count);
		count--;
	} while (0 < count);
	return 0;
}