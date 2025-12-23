// Memory leak example
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = (int*)malloc(sizeof(int));
    *p = 10;
    // forgot to free(p);
    printf("Memory leak\n");
    return 0;
}