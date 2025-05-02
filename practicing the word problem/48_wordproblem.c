// Write a program that calculates the monthly installment of a loan based on the principal, interest rate, and number of months
#include <stdio.h>
int main()
{
    float principal, rate, SI, Amount;
    int month;
    printf("Enter The Principal Amount : ");
    scanf("%f", &principal);
    printf("Enter The Interst rate Per Anum : ");
    scanf("%f", &rate);
    printf("Enter The Number of Months : ");
    scanf("%d", &month);
    SI = ((principal * rate * (month / 12)) / 100);
    Amount = principal + SI;
    printf("The Monthly Installment You have to pay For your loan is %.2f", Amount / month);
    return 0;
}