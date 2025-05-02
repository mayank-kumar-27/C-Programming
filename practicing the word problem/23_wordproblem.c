// Write a program to print the Fibonacci series up to a given number.
#include<stdio.h>
int main()
{
    int num,a=-1,b=1,c;
    printf("Enter number of Terms You want the Fibonacci Series of:");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return 0;
}