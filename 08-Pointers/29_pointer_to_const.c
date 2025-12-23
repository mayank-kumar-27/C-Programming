// Pointer to const
#include <stdio.h>

int main() {
    int x = 10, y = 20;
    const int *p = &x;
    // *p = 15; // error
    p = &y; // ok
    printf("Value: %d\n", *p);
    return 0;
}