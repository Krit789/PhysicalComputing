#include <stdio.h>
#include <string.h>
#define TEXT_LENGTH 101

char * swapCase(char text[TEXT_LENGTH]);
char * toLower(char text[TEXT_LENGTH]);
void resetnText();

char nText[TEXT_LENGTH] = {0};

int main(){
	char text1[TEXT_LENGTH] = {0}, text2[TEXT_LENGTH] = {0}, out[TEXT_LENGTH] = {0};
	scanf("%[^\n]\n%[^\n]", text1, text2);
	strcpy(out, swapCase(text2));
	printf("*** Results ***\n%s\n%s\n***************\nBoth strings are ", swapCase(text1), out);
	if (strcasecmp(text1, text2)) {
		printf("not the same.");
	} else {
		printf("the same.");
	}
	return 0;
}

char * swapCase(char text[TEXT_LENGTH]){
	int i;
	for (i = 0; nText[i] != '\0'; i++) {
		nText[i] = '\0';
	}
	for (i = 0; text[i] != '\0'; i++) {
		if (text[i] >= 65 && text[i] <= 90) {
			nText[i] = text[i] + 32;
		} else if (text[i] >= 97 && text[i] <= 122) {
			nText[i] = text[i] - 32;
		} else {
			nText[i] = text[i];
		}
	}
	return nText;
}