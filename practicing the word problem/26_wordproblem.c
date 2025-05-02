// Write a program to sort a list of numbers entered by the user.
#include <stdio.h>
int main()
{
    int n, temp;
    printf("Enter the Number of Numbers you want to be sorted :");
    scanf("%d", &n);
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        printf("Enter the %d Number: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted Number will be : \n");
    for (int i = 1; i <= n; i++)
    {
        printf("The %d Highest number is %d\n", i, arr[i]);
    }
    return 0;
}
