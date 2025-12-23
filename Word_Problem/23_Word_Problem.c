// Program to print the Fibonacci series up to n terms.
#include <stdio.h>

int main() {
    int n, first = -1, second = 1, next;

    // Input number of terms
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);

    // Validate
    if (n <= 0) {
        printf("Number of terms must be positive.\n");
        return 1;
    }

    // Generate and print series
    printf("Fibonacci series: ");
    for (int i = 0; i < n; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
    printf("\n");

    return 0;
}