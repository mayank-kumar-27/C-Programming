// Write a C program to find the maximum and minimum elements in an array.
#include <stdio.h>
int main()
{
    int n, max, min;
    printf("Enter the Number of Numbers :");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Please Enter a Positive Number :");
        return 1;
    }
    int arr[n];
    printf("Enter the Numbers\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("The maximum Number in array is %d\n", max);
    printf("The minimun Number in array is %d\n", min);
    return 0;
}