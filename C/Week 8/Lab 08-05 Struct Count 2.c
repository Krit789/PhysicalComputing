#include <stdio.h>
#include <ctype.h>
#include <string.h>

struct Statistics{
    int character, words, lines;
};

int main()
{   
    char line[451] = {0};
    struct Statistics stat = {0, 0, 0};
    while (1) {
        scanf(" %[^\n]", line);
        strcat(line, " ");
        if (line[0] == 46) break;
        stat.lines++;
        for (int i = 0; line[i] != '\0'; i++) {
            if (line[i] != 32) {
                stat.character++;
            } else {
                stat.words++;
            }
        }
    }
    printf("Char = %d, word = %d, line = %d", stat.character, stat.words, stat.lines);
    return 0;
}