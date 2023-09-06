#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	char name[20][60], tempChar, tempStr[60];
	int capitalizeNext, i, j;
	for (i = 0; i < 20; i++){
		scanf(" %[^\n]", name[i]);
		capitalizeNext = 1;
		for (j = 0; name[i][j] != '\0'; j++) {
			if (isspace(name[i][j])) {
				capitalizeNext = 1;
			} else {
				tempChar = name[i][j];
				if (capitalizeNext) {
					name[i][j] = toupper(tempChar);
					capitalizeNext = 0;
				} else {
					name[i][j] = tolower(tempChar);
				}
			}
		}
	}
	for (i = 0; i < (sizeof(name) / sizeof(name[0])); i++) {
		for (j = 0; j < (sizeof(name) / sizeof(name[0])) - 1 - i; j++){
			if (strcmp(name[j], name[j+1]) > 0){
				strcpy(tempStr, name[j]);
				strcpy(name[j], name[j+1]);
				strcpy(name[j+1], tempStr);
			}
		}
	}
	
	for (i = 0; i < 20; i++){
		printf("%s\n", name[i]);
	}
	return 0;
}