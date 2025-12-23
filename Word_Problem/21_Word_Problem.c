// Program to find the GCD of two numbers using Euclidean algorithm.
#include <stdio.h>

int main() {
    int a, b;

    // Input numbers
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    // Validate
    if (a <= 0 || b <= 0) {
        printf("Numbers must be positive.\n");
        return 1;
    }

    // Euclidean algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    // Display GCD
    printf("GCD is %d\n", a);

    return 0;
}