// Implementation of calloc() and realloc()

#include<stdio.h>
#include<stdlib.h>

int main() {
    int *p;
    p = (int *) calloc(4, sizeof(int));
    p[0] = 45, p[1] = 33, p[2] = 34, p[3] = 90;

    for(int i = 0; i<4; i++) {
        printf("%d\t", p[i]);
    }

    p = (int *) realloc(p, 5 * sizeof(int));

    p[4] = 100;

    printf("%d", p[4]);

    free(p);

    return 0;
}