#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	unsigned short len, counter[28] = { 0 };
	char found, i, tempChar, letters[28] = { 0 };
	scanf("%d", &len);
	for (i = 0; i < len; i++) {
		found = 0;
		scanf(" %c", &tempChar);
		for (int j = 0; j < strlen(letters); j++) {
			if (letters[j] == tolower(tempChar)) {
				counter[j] += 1;
				found = 1;
			}
		}
		if (!(int) found) {
			counter[strlen(letters)] += 1;
			letters[strlen(letters)] = tolower(tempChar);
		}
	}
	for (i = 0; i < strlen(letters); i++) {
		printf("%c: %d\n", letters[(int) i], counter[(int) i]);
	}
	return 0;
}