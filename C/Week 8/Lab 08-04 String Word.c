#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main()
{   
    int count = 0;
    char text[150] = {0};
    scanf("%[^\n]", text);
    text[strlen(text)] = ' ';
    text[strlen(text)] = '\0';
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == 32) {
            count++;
        }
    }
    printf("%d words\n----\n", count);
    count = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == 32) {
            printf(" : %d\n", count);
            count = 0;
        } else {
            printf("%c", tolower(text[i]));
            count++;
        }
    }
    return 0;
}