#include <stdio.h>
int main()
{
    int m, n, sum = 0;
    printf("Enter the number of rows you want :");
    scanf("%d", &m);
    printf("Enter the number of columns you want :");
    scanf("%d", &n);
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            printf("Enter the value of index (%d%d): ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The Matrix is :\n");
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
    printf("The Sum of Each element In matrix is %d", sum);
    return 0;
}