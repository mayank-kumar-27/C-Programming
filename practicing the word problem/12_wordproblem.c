//Write a program that asks the user to input a number and then prints out whether the number is positive, negative, or zero.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Integer Please: ");
    scanf("%d",&a);
    if(a>0)
    {
        printf("Entered Number is Positive.");
    }
    else if(a<0)
    {
        printf("Entered Number is Negative.");
    }
    else
    {
        printf("Entered Number is ZERO.");
    }
    return 0;
}