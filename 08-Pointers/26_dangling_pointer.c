// Dangling pointer
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = (int*)malloc(sizeof(int));
    *p = 10;
    printf("Value: %d\n", *p);
    free(p);
    // p is now dangling
    printf("Dangling pointer\n");
    return 0;
}