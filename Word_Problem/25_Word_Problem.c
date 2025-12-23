// Program to check if a given number is a palindrome.
#include <stdio.h>

int main() {
    int num, digit, original, reversed = 0;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        printf("Negative numbers are not considered palindromes.\n");
        return 0;
    }

    original = num;

    // Reverse the number
    while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    // Check if palindrome
    if (reversed == original) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}