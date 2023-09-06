#include <stdio.h>
#include <ctype.h>

int main()
{
    char text[101] = {0}, tmp;
    int dupe = 0;
    scanf("%[^\n]", text);
    do {   
        for (int i = 0; text[i + 1] != '\0'; i++)
        {
            if (text[i] == text[i+1]) {
                text[i] == 127;
                text[i+1] == 127;
                dupe = 1;
            }
        }
        for (int i = 0; text[i + 1] != '\0'; i++)
        {
            if (text[i] == text[i+1]) {
                text[i] == 127;
                text[i+1] == 127;
                dupe = 1;
            }
        }
        printf("%s", text);
    } while (dupe);
    return 0;
}