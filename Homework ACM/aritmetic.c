//1. Write a program that takes two integers as input and performs basic arithmetic operations (addition, subtraction, multiplication, and division) on them. Print the results.
#include<stdio.h>
void main()
{
    float a,b;
    printf("Enter a : ");
    scanf("%f",&a);
    printf("Enter b : ");
    scanf("%f",&b);

    printf("The sum is %f",a+b);
    printf("The Substraction is %f",a-b);
    printf("The Multiplication is %f",a*b);
    printf("The Division is %f",a/b);
}