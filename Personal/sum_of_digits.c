// Write a program that takes a number as input and calculates the sum of its digits using loops.
#include <stdio.h>
int main()
{
    int num, sum = 0;

    printf("Enter a Number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        int n = num % 10;
        sum += n;
        num /= 10;
    }

    printf("The sum of digits of entered number is %d", sum);
    return 0;
}