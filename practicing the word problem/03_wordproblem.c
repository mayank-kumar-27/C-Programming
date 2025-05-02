// Write a program that asks the user to input a temperature in Celsius
// and converts it to Fahrenheit using the formula: F = (9/5) * C + 32.
#include <stdio.h>
int main()
{
    float C, F;
    printf("Enter the TEMPERATURE in CELCIUS :");
    scanf("%f", &C);
    
    // F = (9/5) * C + 32 or 1.8*C + 32;

    F = ((1.8) * C + 32);
    printf("The TEMPERATURE in FAHRENHITE is %.2f", F);
    return 0;
}