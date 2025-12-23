// Free memory
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = (int*)malloc(sizeof(int));
    *p = 42;
    printf("Before free: %d\n", *p);
    free(p);
    printf("Memory freed\n");
    return 0;
}