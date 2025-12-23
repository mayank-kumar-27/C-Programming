// Pointer increment decrement
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;
    printf("Initial: %d\n", *p);
    p++;
    printf("After ++: %d\n", *p);
    p--;
    printf("After --: %d\n", *p);
    return 0;
}