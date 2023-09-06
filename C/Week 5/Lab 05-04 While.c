#include <stdio.h>

int main() {
	int count, i = 0;
	scanf("%d", &count);
	while (i < count) {
		printf("%d ", i + 1);
		i++;
	}
	return 0;
}