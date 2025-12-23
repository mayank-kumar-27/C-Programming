// Program to convert temperature from Celsius to Fahrenheit.
// Formula: F = (9/5) * C + 32
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input Celsius temperature
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert to Fahrenheit
    fahrenheit = (9.0 / 5.0) * celsius + 32.0;

    // Display result
    printf("The temperature in Fahrenheit is %.2f\n", fahrenheit);

    return 0;
}