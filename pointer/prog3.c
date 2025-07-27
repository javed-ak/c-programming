#include<stdio.h>

int main() {
    int age = 45, *iptr = &age;
    int *ptr = NULL;
    ptr = iptr;
    printf("Address of iptr = %d\n", iptr);
    printf("Address of ptr = %p\n", ptr);
    return 0;
}