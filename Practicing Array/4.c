// Write a C program to search for an element in an array using linear search.
#include <stdio.h>
int main()
{
    int n, s, found = 0;
    printf("Enter the Number of Elements : ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Please Enter a Positive Number");
        return 1;
    }
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the Number you want to search for : ");
    scanf("%d", &s);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == s)
        {
            printf("Yes This number %d is found at index %d", s, i);
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("Sorry! This number %d is not in array entered by you Before.", s);
    }
    return 0;
}