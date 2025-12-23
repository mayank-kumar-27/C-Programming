// Pointer addition subtraction
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;
    printf("p: %d\n", *p);
    printf("p+1: %d\n", *(p + 1));
    printf("p+2: %d\n", *(p + 2));
    printf("p-1: %d\n", *(p - 1)); // invalid but for demo
    return 0;
}