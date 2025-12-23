// Pointer arithmetic
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;
    printf("First: %d\n", *p);
    p++;
    printf("Second: %d\n", *p);
    p += 2;
    printf("Fourth: %d\n", *p);
    return 0;
}