#include <stdio.h>

int main() {
	char text[300] = {0}, toFind[2] = {0};
	int foundCount = 0;
	scanf("%c\n%[^\n]", &toFind[0], text);
	(toFind[0] < 97) {
		toFind[1] = toFind[0] + 32;
	} else {
		toFind[1] = toFind[0] - 32;
	}
	for (int j = 0; j < 300; j++){
		if (text[j] == toFind[0] || text[j] == toFind[1]) foundCount++;
	}
	printf("%d", foundCount);
}