// Pointer dereference
#include <stdio.h>

int main() {
    int x;
    printf("Enter x: ");
    scanf("%d", &x);
    int *p = &x;
    printf("Dereferenced value: %d\n", *p);
    *p = 20;
    printf("Modified value: %d\n", x);
    return 0;
}