#include <stdio.h>

// input 5.12 9.26 6.99 output 6.99 5.12 9.26
// 1 -> 2, 2 -> 3, 3 -> 1

int main(){
    float x, y, z;
    float *ptr_x, *ptr_y, *ptr_z, *ptr_tmp;
    scanf("%f %f %f", &x, &y, &z);
    ptr_x = &x;
    ptr_y = &y;
    ptr_z = &z;
    
    ptr_tmp = ptr_y;
    ptr_y = ptr_x;
    ptr_x = ptr_z;
    ptr_z = ptr_tmp;
    printf("%p %p %p", ptr_x, ptr_y, ptr_z);


}