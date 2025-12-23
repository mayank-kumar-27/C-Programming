// Program to convert a decimal number to its binary equivalent.
#include <stdio.h>

int main() {
    int num, binary[32], index = 0;

    // Input number
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Validate
    if (num < 0) {
        printf("Number must be non-negative.\n");
        return 1;
    }

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    // Convert to binary
    while (num > 0) {
        binary[index++] = num % 2;
        num /= 2;
    }

    // Display binary
    printf("Binary equivalent: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}