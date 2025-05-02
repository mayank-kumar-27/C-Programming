// Write a program that calculates the sum of the digits of a given number.
#include <stdio.h>
int main()
{
    int num, digit, sum = 0;
    printf("Enter the Number whose sum of digits you want :");
    scanf("%d", &num);
    while (num > 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    printf("The sum of its Digit is %d", sum);
    return 0;
}