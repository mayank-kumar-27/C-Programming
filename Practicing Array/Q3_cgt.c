// Write a C program to find the largest element in an array of size n.
#include <stdio.h>
int main()
{
    int n, max;
    printf("Enter the Number of Elements you want to Enter :");
    scanf("%d", &n);
    printf("Now Enter : \n");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("The Largest element in Array is %d", max);
    return 0;
}