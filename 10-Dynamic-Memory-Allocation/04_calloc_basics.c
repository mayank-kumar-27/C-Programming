// Calloc basics
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = (int*)calloc(1, sizeof(int));
    if (p == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Value: %d\n", *p); // initialized to 0
    free(p);
    return 0;
}