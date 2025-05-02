#include <stdio.h>
int main()
{
    int num, digit, original_num, sum = 0;
    printf("Enter the Number:");
    scanf("%d", &num);
    original_num = num;
    while (num > 0)
    {
        digit = num % 10;
        sum = sum * 10 + digit;
        num = num / 10;
    }
    num = original_num;
    if (num == sum)
    {
        printf("Enterd is Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}