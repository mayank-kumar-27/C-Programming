// Array of pointers
#include <stdio.h>

int main() {
    int a = 1, b = 2, c = 3;
    int *arr[3] = {&a, &b, &c};
    for (int i = 0; i < 3; i++) {
        printf("%d ", *arr[i]);
    }
    printf("\n");
    return 0;
}