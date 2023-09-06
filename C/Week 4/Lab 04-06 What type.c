#include <stdio.h>

int main(){
	char myChar;
	int asciiChar;
	scanf("%c", &myChar);
	asciiChar = myChar + 0;
	if (asciiChar >= 65 && asciiChar <= 90) {
		printf("uppercase");
	} else if (asciiChar >= 97 && asciiChar <= 122) {
		printf("lowercase");
	} else if (asciiChar >= 48 && asciiChar <= 57) {
		printf("number");
	}else {
		printf("error");
	}
	return 0;
}