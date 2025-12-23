// Program to calculate the factorial of a given number using a loop.
// Factorial: n! = n * (n-1) * ... * 1
#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;

    // Input number
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    // Validate
    if (n < 0) {
        printf("Factorial not defined for negative numbers.\n");
        return 1;
    }

    // Calculate factorial
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    // Display
    printf("Factorial of %d is %lld\n", n, factorial);

    return 0;
}