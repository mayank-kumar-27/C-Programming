// Write a C program to dynamically allocate memory for an array of integers entered by the user. The program should:

// Prompt the user to enter the number of elements in the array.
// Use malloc to allocate memory for the array.
// Accept the elements of the array from the user.
// Calculate and display the sum of all elements in the array.
// Free the allocated memory before the program ends.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the Size of Array: ");
    scanf("%d", &n);

    int *ptr;

    ptr = (int *)(malloc(n * sizeof(int)));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d Value: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    int sum = 0;

    for (int j = 0; j < n; j++)
    {
        sum += ptr[j];
    }

    printf("The sum is %d", sum);

    free(ptr);

    return 0;
}