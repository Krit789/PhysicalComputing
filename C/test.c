#include <stdio.h>
int arr[] = {1,2,3,4,5,6};
main()
{
    int *ptr; 
    ptr = arr;
    ptr = ptr+3;
    printf("%d",*ptr);
} 