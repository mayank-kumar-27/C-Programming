//Write a program that converts a temperature given in Fahrenheit to Celsius using the formula: C = (F - 32) * 5/9. Ensure the result is printed as a float with two decimal places.
#include<stdio.h>
void main()
{
    float C,F;
    printf("Enter the Temperature in Fahrenheit : ");
    scanf("%f",&F);
    C=(F-32)*5/9;
    printf("Temperature in Celsius is %f",C);
}