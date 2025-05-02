#include <stdio.h>
int main()
{
    int rows, space, i,n;
    printf("Enter The Number Of Rows You want : ");
    scanf("%d",&n);
    for (rows = 1; rows <= n; rows++)
    {
        for (i = 1; i <= (rows - 1); i++)
        {
            printf(" ");
        }
        for (space = 1; space <= ((n*2+1) - 2 * rows); space++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}