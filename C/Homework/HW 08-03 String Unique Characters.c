#include <stdio.h>
#include <string.h>
 
int main() {
    char text[101] = {0}, text2[101] = {0}, tmp;
    short i, dupe = 0, counter = 0;
    scanf("%[^\n]", text);
    strcat(text, " ");
    while (1) {   
        dupe = 0;
        counter = 0;
        for (i = 0; text[i] != '\0'; i++){
            if (text[i] != text[i+1]) {
                text2[counter++] = text[i];
                if (text[i+1] == '\0') {
                    text2[counter++] = '\0';
                }     
            } else {
                dupe = 1;
                tmp = text[i];
                for (int j = i + 1; tmp == text[j]; j++){
                    if (text[j+1] == '\0') break;
                    i++;
                }
            }
        }
        if (!dupe) break;
        puts(text2);
        strcpy(text, text2);
    }
    return 0;
}