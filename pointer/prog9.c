// Subscripting Pointer Value

#include<stdio.h>

int main() {
    int a[5] = {23, 34, 12, 36, 93};
    int *p = a;

    printf("a[3] = %d\n", a[3]);
    printf("*(a + 3) = %d\n", *(a + 3));
    
    printf("p[3] = %d\n", p[3]);
    printf("*(p + 3) = %d\n", *(p + 3));

    return 0;
}