// Program to merge two lists of numbers entered by the user.
#include <stdio.h>

int main() {
    int m, n;

    // Input sizes
    printf("Enter the number of elements in list 1: ");
    scanf("%d", &m);
    printf("Enter the number of elements in list 2: ");
    scanf("%d", &n);

    // Validate
    if (m <= 0 || n <= 0) {
        printf("Number of elements must be positive.\n");
        return 1;
    }

    int arr1[m], arr2[n], merged[m + n];

    // Input list 1
    printf("Enter elements of list 1:\n");
    for (int i = 0; i < m; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    // Input list 2
    printf("Enter elements of list 2:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    // Merge lists
    for (int i = 0; i < m; i++) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < n; i++) {
        merged[m + i] = arr2[i];
    }

    // Display merged list
    printf("Merged list: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}