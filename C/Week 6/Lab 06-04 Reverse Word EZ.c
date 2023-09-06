#include <stdio.h>

int main() {
	char text[100];
	scanf("%[^\n]", text);
	for (int i = 0; i < sizeof(text) / sizeof(text[0]); i++){
		if (text[i] == '\0') {
			for (int j = i - 1; j >= 0; j--) {
				printf("%c", text[j]);
			}
		return 0;
		}
	}
}