//Try to print.
//   *
//  *** 
// *****
//*******
#include<stdio.h>
int main()
{
    int rows,space,i,n;
    printf("Enter the Number of Rows You want :");
    scanf("%d",&n);
    for(rows=1; rows<=n; rows++)
    {
        for(space=1; space<=(n-rows); space++)
        {    
            printf(" ");  
        }  
        for(i=1; i<=(2*rows-1); i++)
        {
            printf("*");
        }
     printf("\n");
    }
    return 0;
}