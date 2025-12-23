// Program to check if a number is positive, negative, or zero.
#include <stdio.h>

int main() {
    int num;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check and display
    if (num > 0) {
        printf("The number %d is positive.\n", num);
    } else if (num < 0) {
        printf("The number %d is negative.\n", num);
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}