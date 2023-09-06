#include <stdio.h>
#include <ctype.h>

int main()
{
    char text[201] = {0}, tmp;
    scanf("%[^\n]", text);
    for (int i = 0; text[i] != '\0'; i++)
    {
        for (int j = 0; text[j+1] != '\0'; j++)
        {
            tmp = text[j];
            if (text[j] > text[j+1]){
                text[j] = text[j+1];
                text[j+1] = tmp;
            }
        }
    }
    printf("%s", text);
    return 0;
}