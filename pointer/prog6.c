// Pointer Arithmetic

#include<stdio.h>

int main() {
    int num1, num2, *p1 = &num1, *p2 = &num2, x;
    
    printf("p = %d\n", p1);
    
    p1 += 2;
    printf("p = %d\n", p1);

    x = p1 - p2;
    printf("Available bytes b/w p1 and p2 = %d\n", x);

    return 0;
}