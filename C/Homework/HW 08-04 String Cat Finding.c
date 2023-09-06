#include <stdio.h>
#include <ctype.h>

int main()
{
    char text[2001] = {0};
    int i, found[100] = {0}, count = 0;
    scanf("%[^\n]", text);

    for (i = 0; text[i] != '\0'; i++){
        text[i] = tolower(text[i]);
    }

    for (i = 0; text[i+2] != '\0'; i++){
        if (text[i] == 'c' && text[i+1] == 'a' && text[i+2] == 't'){
            found[count] = i;
            count++;
            i += 2;
        }
    }
    for (i = 0; i < count; i++){
        printf("%d", found[i]);
        if (i < count - 1) {
            printf(", ");
        }
    }
    return 0;
}