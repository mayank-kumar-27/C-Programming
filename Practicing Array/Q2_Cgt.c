//  Write a C program to find the sum of all elements in an array of size n.
#include <stdio.h>
int main()
{
    int n, add = 0;
    printf("Enter the Number of Elements you want to Enter :");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Sum of Entered Numbers is : \n");
    for (int i = 0; i < n; i++)
    {
        add = add + arr[i];
    }
    printf("%d ", add);
    return 0;
}