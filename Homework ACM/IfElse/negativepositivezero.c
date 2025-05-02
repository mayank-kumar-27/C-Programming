//Write a C program to check positive negative or zero.
#include<stdio.h>
int main()
{
    int n,f;
    printf("Enter N :");
    scanf("%d",&n); 
    if(n>0)
    {
        printf("Number Is Positive");
    }
    else if(n<0)
    {
        printf("Number is Negative");
    }
    else
    {
        printf("Number is Zero");
    }    
 return 0;
}