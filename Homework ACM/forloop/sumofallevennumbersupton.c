//Write a C program to find sum of all even numbers between 1 to n
#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter N upto which you want to find sum of all even numbers between 1 to n :");
    scanf("%d",&n);

    for( i=1; i<=n; i++)
    if(i%2==0)
    sum=sum+i;
    printf("The Sum is :%d",sum);
}