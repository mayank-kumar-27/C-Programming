//Write a program in C to check if a given number is even or odd using the function
#include<stdio.h>
void num(int n)
{
    if(n%2==0)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }
}
int main()
{
    int A;
    printf("Enter the number you want to check odd or even : ");
    scanf("%d",&A);
    num(A);
    return 0;
}