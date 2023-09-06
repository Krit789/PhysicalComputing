#include <stdio.h>

int main() {
	char text[300], toFind[2];
	int foundLoc[300], foundCount = 0;
	for (int i = 0; i < sizeof(text) / sizeof(text[0]); i++){
		text[i] = 127;
	}
	scanf("%[^\n]\n%c", text, &toFind[0]);
	if (toFind[0] < 97) {
		toFind[1] = toFind[0] + 32;
	} else {
		toFind[1] = toFind[0] - 32;
	}
	for (int j = 0; j < 300; j++){
		if (text[j] == toFind[0] || text[j] == toFind[1]) {
			foundLoc[foundCount] = j;
			foundCount++;
		}
	}
	if (foundCount) {
		printf("There is/are %d \"%c\" in the above sentences.\nPosition:", foundCount, toFind[0]);
		for (int k = 0; k < foundCount; k++) {
			printf(" %d", foundLoc[k] + 1);
			if (k + 1 != foundCount) printf(",");
		}
	} else {
		printf("Not found.");
	}
}