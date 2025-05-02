// Write a C program to dynamically allocate memory for a 2D matrix (m x n) entered by the user. The program should:

// Prompt the user to enter the number of rows (m) and columns (n) of the matrix.
// Use malloc to dynamically allocate memory for the matrix.
// Accept the elements of the matrix from the user.
// Display the matrix.
// Calculate and display the sum of all elements in the matrix.
// Free the allocated memory before the program ends.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int r, c;

    printf("Enter the Rows of Matrix: ");
    scanf("%d", &r);
    printf("Enter the Columns of Matrix: ");
    scanf("%d", &c);

    int *ptr;

    ptr = (int *)(malloc(r * c * sizeof(int)));

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the element at (%d,%d): ", i + 1, j + 1);
            scanf("%d", &ptr[i * c + j]);
        }
    }

    printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", ptr[i * c + j]);
        }
        printf("\n");
    }
    printf("\n");

    int sum = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum += ptr[i * c + j];
        }
    }

    printf("The sum is %d", sum);

    free(ptr);
    return 0;
}