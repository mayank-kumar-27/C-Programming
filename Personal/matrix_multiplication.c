// Implement matrix multiplication for two matrices provided by the user.
#include <stdio.h>
int main()
{
    int m, n, p, q;

    printf("Enter the no of rows of matrix 1: ");
    scanf("%d", &m);
    printf("Enter the no of columns of matrix 1: ");
    scanf("%d", &n);

    if (m < 1 || n < 1)
    {
        printf("Invalid Input! Number of rows or columns cant be less then 1");
        return 1;
    }
    int mat1[m][n];

    printf("\nEnter the no of rows of matrix 2: ");
    scanf("%d", &p);
    printf("Enter the no of columns of matrix 2: ");
    scanf("%d", &q);

    if (p < 1 || q < 1)
    {
        printf("Invalid Input! Number of rows or columns cant be less then 1");
        return 1;
    }
    int mat2[p][q];

    if (n != p)
    {
        printf("Multiplication is not Possible for these matrix that you entered");
        return 1;
    }

    printf("\nEnter Numbers for Matrix 1: \n\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter value at [%d,%d]: ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nEnter Numbers for Matrix 2: \n\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("Enter value at [%d,%d]: ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }

    int matm[m][q];
    printf("\nThe Multiplication is: \n\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            matm[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                matm[i][j] += mat1[i][k] * mat2[k][j];
            }
            printf("%d ", matm[i][j]);
        }
        printf("\n");
    }
    return 0;
}