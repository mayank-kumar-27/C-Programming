// Program to check if a given number is a prime number.
#include <stdio.h>

int main() {
    int num, isPrime = 1;

    // Input number
    printf("Enter a positive integer greater than 1: ");
    scanf("%d", &num);

    // Validate input
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    // Check for factors from 2 to num-1
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    // Display result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}