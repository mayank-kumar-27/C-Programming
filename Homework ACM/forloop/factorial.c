//Write a C program to calculate factorial of a number
#include<stdio.h>
void main()
{
    int p,n=1;
    printf("Enter N to get its factorial : ");
    scanf("%d",&p);
    for (int i=1; i<=p; i++)
        n=n*i;
        printf("Factorial of given number is : %d",n);   
}