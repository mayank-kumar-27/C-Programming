//try to print.
// *****
//  ***
//   *
//   * 
//  ***
// ***** 
#include<stdio.h>
int main()
{
    for(int i=0; i<3; i++)
    {
        for(int space=0;space<=i;space++)
        {
            printf(" ");
        }
        for(int j=0; j<5-2*i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=0;i<3;i++)
    {
        for (int space=0;space<=2-i;space++)
        {
            printf(" ");
        }
        for(int j=0;j<2*i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}