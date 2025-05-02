// Write a program to calculate the factorial of a given number using a loop.
#include <stdio.h>
int main()
{
    int n, num = 1;
    printf("Enter the Number Whose factorial U want :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        num = num * i;
    }
    printf("The Factorial of Entered Number is %d", num);
    return 0;
}