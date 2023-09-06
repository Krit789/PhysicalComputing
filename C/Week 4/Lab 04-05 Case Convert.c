#include <stdio.h>

int main(){
	char myChar;
	int asciiChar;
	scanf("%c", &myChar);
	asciiChar = myChar + 0;
	if (asciiChar >= 65 && asciiChar <= 90) {
		printf("%c", asciiChar + 32);
	} else if (asciiChar >= 97 && asciiChar <= 122) {
		printf("%c", asciiChar - 32);
	} else {
		printf("error");
	}
	return 0;
}