// Program to reverse the digits of an integer.
#include <stdio.h>

int main() {
    int num, reversed = 0;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Reverse digits
    int original = num;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    // Display
    printf("Original: %d\n", original);
    printf("Reversed: %d\n", reversed);

    return 0;
}