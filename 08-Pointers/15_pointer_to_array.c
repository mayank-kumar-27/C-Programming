// Pointer to array
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int (*p)[5] = &arr;
    printf("First element: %d\n", (*p)[0]);
    printf("Second element: %d\n", (*p)[1]);
    return 0;
}