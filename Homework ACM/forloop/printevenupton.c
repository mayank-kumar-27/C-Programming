//Write a C program to print all even numbers between 1 to n
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the Value of N upto which you want EVEN NUMBERS :");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    if(i%2==0)
    {
        printf("%d\n", i);
    }
}