#include<stdio.h>

int main() {
    char *cptr;
    int *iptr;
    float *fptr;
    double *dptr;

    printf("Size of Char = %zu\n", sizeof(cptr));
    printf("Size of Int = %zu\n", sizeof(iptr));
    printf("Size of Float = %zu\n", sizeof(fptr));
    printf("Size of Double = %zu\n", sizeof(dptr));

    return 0;
}