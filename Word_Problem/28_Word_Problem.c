// Program to calculate the power of a number using a loop (base^exponent).
#include <stdio.h>

int main() {
    int base, exponent, result = 1;

    // Input base and exponent
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent (non-negative): ");
    scanf("%d", &exponent);

    // Validate exponent
    if (exponent < 0) {
        printf("Exponent must be non-negative.\n");
        return 1;
    }

    // Calculate power
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    // Display result
    printf("%d^%d = %d\n", base, exponent, result);

    return 0;
}