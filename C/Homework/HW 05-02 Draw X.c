#include <stdio.h>

int main() {
	int size;
	scanf("%d", &size);
	for (int y = 0; y < size; y++) {
		for (int x = 0; x < size; x++) {
			(x == y || size - x - 1 == y) ? printf("-") : printf("#");
		}	
		printf("\n");
	}
	return 0;
}