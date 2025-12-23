// Program to calculate the sum of the digits of a given number.
#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    // Calculate sum of digits
    int original = num;
    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    // Display result
    printf("The sum of digits of %d is %d\n", original, sum);

    return 0;
}