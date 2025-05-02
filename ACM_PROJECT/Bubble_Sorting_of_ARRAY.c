#include <stdio.h>
int main()
{
    int n, temp;
    printf("Enter the Number of Numbers You want to Sort : ");
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("Enter a Valid Input, As You are sorting then There must be at least 2 Numbers for Sorting.");
        return 1;
    }
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth Number : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nThe Numbers Before Sorting were : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nThe Numbers After sorting is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}