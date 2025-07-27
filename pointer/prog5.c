#include<stdio.h>

int main() {
    int num = 117506051, *iptr = &num;
    char *cptr = &num;

    printf("Value of *iptr = %d\n", *iptr);
    printf("Value of *cptr = %d", *cptr);

    return 0;
}