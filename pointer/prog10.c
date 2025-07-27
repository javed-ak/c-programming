// Pointer to an Array

#include<stdio.h>

int main() {
    int *p, (*ptr)[5];

    int a[5] = {12, 23, 34, 45, 56};

    p = a;
    ptr = &a;
    
    printf("Address of Array \'a\' is %d\n", &a);
    printf("Address of Array \'a[0]\' is %d\n\n", &a);

    printf("p = %d and ptr = %d\n", p, ptr);
    
    p++;
    ptr++;
    
    printf("p = %d and ptr = %d\n", p, ptr);

    return 0;
}