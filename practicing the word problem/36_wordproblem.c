// Write a program that implements a basic calculator that can add, subtract, multiply, and divide two numbers entered by the user.
#include <stdio.h>
int main()
{
    float a, b;
    char ch;
    printf("Enter 1st Number :");
    scanf("%f", &a);
    printf("Enter 2nd Number :");
    scanf("%f", &b);
    do
    {
        printf("Enter 1,2,3 and 4 for Addition,subtraction,multiplication and division RESPECTIVELY. Enter 5 To complete :");
        scanf(" %c", &ch);
        switch (ch)
        {
        case '1':
            printf("The Sum of entered number is %.2f\n", a + b);
            break;
        case '2':
            printf("The Subtraction of entered number is %.2f\n", a - b);
            break;
        case '3':
            printf("The Multiplication of entered number is %.2f\n", a * b);
            break;
        case '4':
            printf("The Division of entered number is %.2f\n", a / b);
            break;
        case '5':
            printf("You Have Successfully Exited The programm,Thankyou!");
            break;
        default:
            printf("Enter a valid Input\n");
        }
    } while (ch != '5');
    return 0;
}