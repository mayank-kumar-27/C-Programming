// Program to calculate the sum of all even numbers between two given numbers.
#include <stdio.h>

int main() {
    int start, end, sum = 0;

    // Input range
    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    // Validate
    if (start > end) {
        printf("Start should be less than or equal to end.\n");
        return 1;
    }

    // Calculate sum of evens
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    // Display
    printf("Sum of even numbers from %d to %d is %d\n", start, end, sum);

    return 0;
}