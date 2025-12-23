// Swap call by value
#include <stdio.h>

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside function: %d %d\n", a, b);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swap: %d %d\n", a, b);
    swapByValue(a, b);
    printf("After swap: %d %d\n", a, b);
    return 0;
}