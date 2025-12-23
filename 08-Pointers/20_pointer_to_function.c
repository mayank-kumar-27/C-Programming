// Pointer to function
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int (*p)(int, int) = add;
    printf("Sum: %d\n", p(5, 3));
    return 0;
}