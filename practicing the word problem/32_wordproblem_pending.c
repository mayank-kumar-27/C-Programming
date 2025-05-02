//  Write a program that finds the second largest number in a list entered by the user.
#include <stdio.h>
int main()
{
    int max, secmx, min, n, temp;
    printf("Enter the Number of Elements you want to Enter :");
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("Enter At least Two Numbers.");
        return 1;
    }
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %dth Number :", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
    secmx = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max > arr[i] && arr[i] > min)
        {
            secmx = arr[i];
        }
    }
    printf("The Second largest Number in array is %d", secmx);
    return 0;
}