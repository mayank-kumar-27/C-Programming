#include <stdio.h>
int main()
{
    int n, i, j, k, l, space1, space2;
    printf("Enter how many Rows you want :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (space1 = 1; space1 <= n - i; space1++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int k = 1; k <= n - 1; k++)
    {
        for (space2 = 1; space2 <= k - 1; space2++)
        {
            printf(" ");
        }
        for (l = 1; l <= 2 * n + 1 - 2 * k; l++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}