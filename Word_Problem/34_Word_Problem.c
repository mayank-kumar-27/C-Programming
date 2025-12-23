// Program to find the sum of all numbers in a matrix entered by the user.
#include <stdio.h>

int main() {
    int rows, cols, sum = 0;

    // Input dimensions
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Validate
    if (rows <= 0 || cols <= 0) {
        printf("Rows and columns must be positive.\n");
        return 1;
    }

    int matrix[rows][cols];

    // Input matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display matrix
    printf("Entered matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Calculate sum
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }

    // Display sum
    printf("Sum of all elements: %d\n", sum);

    return 0;
}