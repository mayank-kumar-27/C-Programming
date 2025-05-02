//try to print given pattern.
//*****
//*****
//*****
//*****
//*****
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("How Many Rows and Column you want :");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {  
        for(j=1; j<=n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}