#include <stdio.h>

int main() {
	char text[200], shiftUpper[26] = "ABXYPQRMNCEDKLJOSHTUFVZGWI", shiftLower[26]= "abxypqrmncedkljoshtufvzgwi";
	scanf("%[^\n]", text);
	for (int i = 0; i < 200; i++) {
		if (text[i] == '\0') break;
		if (text[i] == 32) printf("%c", text[i]);
		if (text[i] >= 65 && text[i] <= 90) {
			for (int j = 0; j < 26; j++){
				if (text[i] == shiftUpper[j]) {
					j -= 5;
					if (j < 0) j += 26;
					printf("%c", shiftUpper[j]);
					break;
				}
			}
		} else if (text[i] >= 61 && text[i] <= 122) {
			for (int j = 0; j < 26; j++){
				if (text[i] == shiftLower[j]) {
					j -= 5;
					if (j < 0) j += 26;
					printf("%c", shiftLower[j]);
					break;
				}
			}
		}
	}
}