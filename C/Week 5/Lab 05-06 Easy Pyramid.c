#include <stdio.h>
 
int main() {
    int size;
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size + i; j++) {
            (j >= size-i-1) ? printf("*") : printf(" ");
        }   
        printf("\n");
    }
    return 0;
}