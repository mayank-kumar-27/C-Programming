// write a c program that reverses the digits of an integer entered by the user.
#include <stdio.h>
int main()
{
    int ones_digit, tens_digit, temp;
    printf("Enter the Digit at Tens place :");
    scanf("%d", &tens_digit);
    printf("Enter the Digit at Ones place :");
    scanf("%d", &ones_digit);

    if (tens_digit != ones_digit)
    {
        printf("The Number Before Reverse is %d%d\n", tens_digit, ones_digit);
        temp = ones_digit;
        ones_digit = tens_digit;
        tens_digit = temp;
        printf("The Number After Reverse is %d%d", tens_digit, ones_digit);
    }
    else
    {
        printf("The Value will Be the same After and Before Reversal of Integers");
    }
    return 0;
}