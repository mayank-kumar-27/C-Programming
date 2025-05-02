// write a programm to print a number divisible by 2 and 3.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number :");
    scanf("%d",&x);

    if(x%6==0)
    {
        printf("Number is Divisible by 2 and 3");
    }
    else
    {
        printf("Number is NOT divisible by 2 and 3");
    }
    return 0;
}