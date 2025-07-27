// Pointer to Pointer

#include<stdio.h>

int main() {
    int a = 45, *p1 = &a, **p2 = &p1;

    printf("Value of \'a\' by **p = %d\n\n", **p2);

    printf("Value of p1 = %d\n", p1);
    printf("Value at address of p1 = %d\n", *p1);
    printf("Address of p1 = %d\n", &p1);
    printf("Address of p1 = %d\n\n", p2);
    
    printf("Value of p2 = %d\n", p2);
    printf("Value at address of p2 = %d\n", *p2);
    printf("Address of p2 = %d\n", &p2);

    return 0;
}