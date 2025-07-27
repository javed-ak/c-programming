// Simulating Call by Reference by using Pointer

#include<stdio.h>

int fun(int *p, int *q) {
    (*p)++;
    (*q)++;

    printf("*p = %d, *q = %d\n", *p, *q);
    return 0;
}

int main() {
    int a = 5, b = 10;
    printf("a = %d, b = %d\n", a, b);
    
    fun(&a, &b);
    
    printf("a = %d, b = %d\n", a, b);

    return 0;
}