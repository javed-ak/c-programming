// Tail recursion in C refers to a specific type of recursive function where the recursive call is the last operation performed within the function before returning. This means there are no pending operations or calculations to be done after the recursive call returns

// Print number from 1 to n

#include<stdio.h>

int fun(int n) {
    static int i = 1; 
    if(i>n) {
        return 0;
    }
    printf("Recursion: %d\n", i);
    i++;
    fun(n);
};

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    fun(n);
}