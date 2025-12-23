// Program to sort a list of numbers entered by the user using bubble sort.
#include <stdio.h>

int main() {
    int n, temp;

    // Input number of elements
    printf("Enter the number of numbers to sort: ");
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

    // Bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display sorted array
    printf("Sorted numbers in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
