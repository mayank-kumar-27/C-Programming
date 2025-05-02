#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter The Number Of Rows :");
    scanf("%d", &r);
    printf("Enter The Number Of column :");
    scanf("%d", &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for ( int j = 0; j < c; j++)
        {
            printf("Enter The value of your choice :");
            scanf("%d",& a[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        
        for ( int j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}