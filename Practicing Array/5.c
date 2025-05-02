// Write a C program to count occurrences of a given element in an array.
#include <stdio.h>
int main()
{
    int n, num, count = 0;
    printf("Enter the Number of Elements :");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Enter A positive Number please : ");
        return 1;
    }
    int arr[n];
    printf("Enter the Numbers Now :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the Number whose Multiple Occurence you want to check : ");
    scanf("%d", &num);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
    }
    printf("The number %d occurs %d times in the array.\n", num, count);
    return 0;
}