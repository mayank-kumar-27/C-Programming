// Program to check if a number is an Armstrong number.
#include <stdio.h>

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int num, original, remainder, sum = 0, digits = 0;

    // Input number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Validate
    if (num < 0) {
        printf("Number must be positive.\n");
        return 1;
    }

    original = num;

    // Count digits
    int temp = num;
    while (temp > 0) {
        temp /= 10;
        digits++;
    }

    // Calculate sum of powers
    temp = num;
    while (temp > 0) {
        remainder = temp % 10;
        sum += power(remainder, digits);
        temp /= 10;
    }

    // Check if Armstrong
    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}