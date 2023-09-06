#include <stdio.h>
#include <ctype.h>

int main() {
    char firstName[101] = {0}, lastName[101] = {0};
    scanf("%s %s", firstName, lastName);
    printf("%c.%c.", toupper(firstName[0]), toupper(lastName[0]));
    return 0;
}