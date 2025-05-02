// Write a C program to input n elements in an array and print them.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number of Elements you want to Enter :");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enterd numbers were : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}