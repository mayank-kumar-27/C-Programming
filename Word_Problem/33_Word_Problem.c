// Program to remove duplicate numbers from a list entered by the user.
#include <stdio.h>

int main() {
    int n, temp;

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

    // Sort the array using bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display original sorted list
    printf("Sorted list: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Display unique elements
    printf("Unique numbers: ");
    for (int i = 0; i < n; i++) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
//         count++;
//     }
// }
// if (count > 1)
// {
//     printf("The Number of same Numbers in your list is %d", count);
// }
// else
// {
//     printf("There is NO same Number in Your list");
// }