// Write a program to convert a given number into its binary equivalent.
#include <stdio.h>
int main()
{
    int n, arr[100], i = 0;
    printf("Enter the Number You want to Convert into Its Binary Form : ");
    scanf("%d", &n);
    while (n > 0)
    {
        arr[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("\nThe Binary Equivalent is :\n");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", arr[j]);
    }
    return 0;
}