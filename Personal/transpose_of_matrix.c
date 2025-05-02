#include <stdio.h>
int main()
{
    int m, n;

    printf("Enter the Rows of Matrix: ");
    scanf("%d", &m);
    if (m < 1)
    {
        printf("Number of Rows cant be less then 1, Try again!");
        return 1;
    }

    printf("Enter the Columns of Matrix: ");
    scanf("%d", &n);
    if (n < 1)
    {
        printf("Number of Columns cant be less then 1, Try again!");
        return 1;
    }

    int matrix[m][n];

    printf("\nEnter the Values of Matrix: \n\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the Value at Index [%d,%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe Matrix you entered was: \n\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%5d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nThe Transpose of Matrix you entered is: \n\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%5d ", matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}