// Write a program that checks if a number is an Armstrong number.
#include <stdio.h>
int power(int a, int b)
{
    int product = 1;
    for (int i = 0; i < b; i++)
    {
        product *= a;
    }
    return product;
}
int main()
{
    int num, original_num, remainder, sum = 0, digit = 0;
    printf("Enter the Number :");
    scanf("%d", &num);
    original_num = num;
    while (num > 0)
    {
        num = num / 10;
        digit++;
    }
    num = original_num;
    while (num > 0)
    {
        remainder = num % 10;
        sum = sum + power(remainder, digit);
        num = num / 10;
    }
    num = original_num;
    if (sum == num)
    {
        printf("Entered Number is an Armstrong Number");
    }
    else
    {
        printf("Entered Number is Not an Armstrong Number");
    }
    return 0;
}