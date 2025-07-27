#include<stdio.h>

int main() {
    int a[5] = {3, 2, 4, 5, 6};

    printf("a[1] = %d\n", a[1]);
    printf("*(a + 1) = %d", *(a + 1));
}