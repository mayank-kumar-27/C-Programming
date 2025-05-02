// Develop a program that finds the largest and smallest numbers in a list entered by the user.
#include <stdio.h>
int main()
{
    int n, max, min;
    printf("Enter The Number of Numbers you want to Enter : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth Number : ", i + 1);
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > max)
            {
                max = arr[j];
            }
        }
    }
    min = arr[0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
            }
        }
    }
    printf("\nMaximum Number in Entered List is %d\n", max);
    printf("Minimum Number in Entered List is %d\n", min);
    return 0;
}