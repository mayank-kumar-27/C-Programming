// Pointer comparison
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *p1 = arr;
    int *p2 = arr + 2;
    if (p1 < p2) {
        printf("p1 points to earlier element\n");
    }
    if (p1 == arr) {
        printf("p1 points to start\n");
    }
    return 0;
}