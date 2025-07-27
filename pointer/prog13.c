// Implementation of malloc()

#include<stdio.h>
#include<stdlib.h>

int main() {
    int *p;
    p = (int *) malloc(4 * sizeof(int));
    *p = 45, p[1] = 54, p[2] = 65, p[3] = 34;
    
    for(int i = 0; i<4; i++) {
        printf("%d\t", p[i]);
    }

    free(p);

    return 0;
}