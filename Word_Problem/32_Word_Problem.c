// Program to find the second largest number in a list entered by the user.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("At least two numbers are required.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find largest and second largest
    int largest = arr[0], secondLargest = -1; // assuming positive numbers

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == -1) {
        printf("No second largest number (all elements are the same).\n");
    } else {
        printf("The second largest number is %d\n", secondLargest);
    }

    return 0;
}