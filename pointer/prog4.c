// Dereferencing Pointer Variable

#include<stdio.h>

int main() {
    int a = 5, *ptr1 = &a;
    float b = 3.14, *ptr2 = &b;

    printf("Value of a integer is %d and Address is %p\n", *ptr1, ptr1);
    printf("Value of a integer is %.2f and Address is %p\n", *ptr2, ptr2);

    return 0;
}