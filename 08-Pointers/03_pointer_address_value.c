// Pointer address value
#include <stdio.h>

int main() {
    int x;
    printf("Enter x: ");
    scanf("%d", &x);
    int *p = &x;
    printf("Address: %p, Value: %d\n", p, *p);
    return 0;
}