// Const pointer
#include <stdio.h>

int main() {
    int x = 10, y = 20;
    int *const p = &x;
    *p = 15; // ok
    // p = &y; // error
    printf("Value: %d\n", *p);
    return 0;
}