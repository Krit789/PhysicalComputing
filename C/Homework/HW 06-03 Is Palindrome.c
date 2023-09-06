#include <stdio.h>
#include <string.h>

int main() {
	char text[100] = { 0 }, strL[50] = { 0 }, strR[50] = { 0 };
	int i = 0, textLen = 0;
	scanf("%[^\n]", text);
	textLen = strlen(text) + 1;
	strncpy(strL, text, textLen / 2);
	strL[textLen / 2] = '\0';
	for (i = textLen - 2; i >= (textLen - 1) / 2; i--){
		strncat(strR, &text[i], 1);
	}
	(strcmp(strL, strR) == 0) ? printf("It is Palindrome.") : printf("It is not Palindrome.");
	return 0;
}