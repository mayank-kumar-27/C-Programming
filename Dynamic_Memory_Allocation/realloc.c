#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the Size of Array: ");
    scanf("%d", &n);

    int *ptr = malloc(n * sizeof(int));

    // Check if malloc was successful
    if (ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Accepting values for the array
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d Value: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    int m;
    printf("Enter the New Size of Array: ");
    scanf("%d", &m);

    // Reallocating memory to accommodate the new size
    ptr = realloc(ptr, m * sizeof(int));

    // Check if realloc was successful
    if (ptr == NULL)
    {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Accepting new values for the resized array
    for (int i = n; i < m; i++)
    {
        printf("Enter the %d Value: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    // Printing the updated array
    printf("The updated array is: ");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", ptr[i]); // Print with space
    }
    printf("\n");

    // Free the allocated memory
    free(ptr);

    return 0;
}
