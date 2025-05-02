#include<stdio.h>
int main()
{
    int i,j;
    for (i=1;i<=4;i++)
    {
        for ( j = 1; i <=7 ; j++)
        {
            if(j>=i && j<8-i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}