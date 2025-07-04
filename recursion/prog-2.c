// Factorial of n number

#include<stdio.h>

int factorial(int n) {
    if(n == 0) {
        return 1;
    }
    return n * factorial(n-1);
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Factorial of %d is %d", n, factorial(n));
}