// Pointer to pointer
#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;
    int **pp = &p;
    printf("Value: %d\n", **pp);
    printf("Address of p: %p\n", *pp);
    return 0;
}