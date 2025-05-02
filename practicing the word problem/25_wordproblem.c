// Write a program that reads a string and checks if it is a palindrome.
#include <stdio.h>
int main()
{
    int num, digit, realnumber, sum = 0;
    printf("Enter the Number You want To check a Palindrome or Not :");
    scanf("%d", &num);
    realnumber = num;
    while (num > 0)
    {
        digit = num % 10;
        sum = sum * 10 + digit;
        num = num / 10;
    }
    if (sum == realnumber)
    {
        printf("Number is Pelindrome");
    }
    else
    {
        printf("Number is not a Pelindrome");
    }
    return 0;
}