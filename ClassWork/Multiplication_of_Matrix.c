#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter the Rows of Matrix :");
    scanf("%d", &m);
    printf("Enter the Columns of Matrix :");
    scanf("%d", &n);
    int arr1[m][n], arr2[m][n], c[m][n];
    printf("Enter the numbers of 1st Matrix: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the Numbers of 2nd Matrix: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("The 1st Matrix is \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("The second matrix is \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    printf("The Multiplication of Matrix is :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", c[i][j] = arr1[i][j] * arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}