//Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.
#include<stdio.h>
int fact(int n)
{
    int sum=0,mul=1;
    for(int i=1;i<=n;i++)
    {
        mul=mul*i;
        sum=sum+(mul/i);
    }
    return sum;
}
int main()
{
    int p;
    printf("Enter the number you want the sum of its series :");
    scanf("%d",&p);
    printf("The Sum of Series is %d",fact(p));
    return 0;
}