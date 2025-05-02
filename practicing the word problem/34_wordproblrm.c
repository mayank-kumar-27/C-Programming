// Write a program to find the sum of all numbers in a matrix of numbers entered by the user.
#include <stdio.h>
int main()
{
    int m, n, sum = 0;
    printf("Enter the Number Of Rows :");
    scanf("%d", &m);
    printf("Enter the Number Of Columns :");
    scanf("%d", &n);
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the Element at Index [%d,%d] :", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enterd Matrix is :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("The Sum of All the Elements in The Matrix is %d", sum);
    return 0;
}