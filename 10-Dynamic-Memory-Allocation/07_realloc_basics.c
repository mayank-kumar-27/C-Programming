// Realloc basics
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = (int*)malloc(2 * sizeof(int));
    p[0] = 1; p[1] = 2;
    p = (int*)realloc(p, 4 * sizeof(int));
    p[2] = 3; p[3] = 4;
    for (int i = 0; i < 4; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");
    free(p);
    return 0;
}