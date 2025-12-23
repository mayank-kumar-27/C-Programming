// Program to find the largest and smallest numbers in a list entered by the user.
#include <stdio.h>

int main() {
    int n, max, min;

    // Input number of elements
    printf("Enter the number of numbers: ");
    scanf("%d", &n);

    // Validate
    if (n <= 0) {
        printf("Number of elements must be positive.\n");
        return 1;
    }

    int arr[n];

    // Input elements
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Initialize max and min
    max = min = arr[0];

    // Find max and min
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Display results
    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);

    return 0;
}