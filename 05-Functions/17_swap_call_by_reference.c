// Swap call by reference
#include <stdio.h>

void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swap: %d %d\n", a, b);
    swapByReference(&a, &b);
    printf("After swap: %d %d\n", a, b);
    return 0;
}