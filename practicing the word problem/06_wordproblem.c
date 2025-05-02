// Write a program that calculates the simple interest on a savings account.
// The program should take the principal amount, interest rate, and the number of years as input.
#include <stdio.h>
int main()
{
    float Principal_Amount, Rate, Time, SI;
    printf("Enter the Principal Amount of Savings Account : ");
    scanf("%f", &Principal_Amount);
    printf("Enter the Rate of Interest : ");
    scanf("%f", &Rate);
    printf("Enter the Time : ");
    scanf("%f", &Time);

    SI = (Principal_Amount * Rate * Time) / 100;

    printf("The Simple Interest on this Account is %.2f\n", SI);
    printf("The Total Amount in this Account is %.2f", SI + Principal_Amount);

    return 0;
}