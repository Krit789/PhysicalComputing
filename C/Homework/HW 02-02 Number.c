#include <stdio.h>

int main() {
	char string[5];
	scanf("%s", string);
	printf("%c%c%c%c%c", string[2], string[3], string[4], string[0], string[1]);
	return 0;
}