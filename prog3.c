#include<stdio.h>

int main() {
    int a = 5, *b = &a, c = 45, *d = &c;
    printf("\n\n%d", *b);
    printf("\n\n%d", *d);
    printf("\n\n%d\n\n", a**b);
    return 0;
}