#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number of rows : ");
    scanf("%d", &n);

    for (int i = 1; i <= n / 2 + 1; i++)
    {
        for (int j = (n/2+1) - i; j >= 1; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n / 2 +2 ; i <= n; i++)
    {
        for (int k = 1; k <= 5; k++)
        {
            printf(" ");
        }
        for (int j = (n/2+1) - i; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}