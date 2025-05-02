#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter the Rows of Matrix :");
    scanf("%d", &m);
    printf("Enter the columns of Matrix :");
    scanf("%d", &n);
    int a[m][n], b[m][n], c[m][n];
    printf("Enter the Numbers of 1st Matrix :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the Numbers of 2nd Matrix :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("The First Matrix is :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("The Second Matrix is :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    printf("The addition of Matrix is :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", c[i][j] = a[i][j] + b[i][j]);
        }
        printf("\n");
    }
    return 0;
}