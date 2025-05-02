// Write a function that takes an array and its size as arguments and returns the maximum value using pointers.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Size of Array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Elements of Your Choice : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int *ptr = arr;
    int max = *ptr;
    for (int i = 1; i < n; i++)
    {
        if (max < *(ptr + i))
        {
            max = *(ptr + i);
        }
    }
    printf("The maximum in array is %d", max);
    return 0;
}