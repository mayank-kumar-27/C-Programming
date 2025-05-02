// Write a program to calculate the power of a number using a loop (e.g., base^exponent).
#include <stdio.h>
int main()
{
    int base, exponent, temp = 1;
    printf("Enter the Number whose Power you want :");
    scanf("%d", &base);
    printf("Enter the Degree : ");
    scanf("%d", &exponent);
    for (int i = 0; i < exponent; i++)
    {
        temp = temp * base;
    }
    printf("The Degree %d of base %d is %d", exponent, base, temp);
    return 0;
}