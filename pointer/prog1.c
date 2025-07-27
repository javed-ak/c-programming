#include<stdio.h>

int main() {
    int age = 25;
    float salary = 5000.35;
    printf("Address of Age = %p\n", &age);
    printf("Address of Salary = %p", &salary);
    return 0;
}