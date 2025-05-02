// Write a C program to reverse the elements of an array.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Numbers You want to reverse :");
    scanf("%d", &n);
    if(n<=0)
    {
        printf("Please Enter a positive Number");
        return 1;
    }
    int arr[n];
    printf("Enter the Elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Numbers before reversing is ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Numbers after reversing is ");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}