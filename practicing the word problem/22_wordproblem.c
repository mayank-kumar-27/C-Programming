// Develop a program that checks if a given number is a prime number
#include <stdio.h>
int main()
{
    int num, count = 0;
    printf("Enter the Number You want to Check is Prime or Not : ");
    scanf("%d", &num);
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("The Entered Number %d is Prime", num);
    }
    else
    {
        printf("Entered number is Not a Prime Number");
    }
    return 0;
}