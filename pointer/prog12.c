// void pointer

#include<stdio.h>

int main() {
    char c = 'a';
    int i = 45;
    float f = 3.14;
    void *ptr = &f;

    printf("ptr = %c", *(char *)ptr);
    printf("ptr = %d", *(int *)ptr);
    printf("ptr = %f", *(float *)ptr);

    return 0;
}