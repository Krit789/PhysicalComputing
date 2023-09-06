#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int size, i, j;
    double space[2][2] = {0};
    char lines[2][51];
    scanf("%d\n%[^\n]\n%[^\n]", &size, lines[0], lines[1]);
    for (i = 0; i < 2; i++)
    {
        space[i][0] = ceil((size - strlen(lines[i]) - 2) / 2.0);
        space[i][1] = (size - strlen(lines[i]) - 2) / 2;
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (i == 0 || i == 3)
                printf("*");
            else
            {
                break;
            }
        }
        if (i == 1 || i == 2)
        {
            printf("*");
            for (j = 0; j < (int) space[i - 1][0]; j++)
            {
                printf(" ");
            }
            for (j = 0; j < strlen(lines[i - 1]); j++)
            {
                printf("%c", (int) lines[i - 1][j]);
            }
            for (j = 0; j < (int) space[i - 1][1]; j++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}