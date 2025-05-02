//1. Find the largest number among the three numbers.
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("ENTER 1st Number : ");
    scanf("%d",&a);
    printf("ENTER 2nd Number : ");
    scanf("%d",&b);
    printf("ENTER 3rd Number : ");
    scanf("%d",&c);
    
    if(a>b && a>c)
    printf("The first entered value is the greatest :%d",a);
    else if(b>a && b>c)
    printf("The second entered value is the greatest :%d",b);
    else
    printf("The third entered value is the greatest :%d",c);
}