#include <stdio.h>
int main()
{
    int rows, space, i;
    for (rows = 1; rows <= 4; rows++)
    {
        for (i = 1; i <= (rows - 1); i++)
        {
            printf(" ");
        }
        for (space = 1; space <= (9 - 2 * rows); space++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}