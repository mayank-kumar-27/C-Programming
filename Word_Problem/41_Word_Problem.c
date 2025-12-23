// Program to calculate BMI based on weight and height.
#include <stdio.h>

int main() {
    float weight, height, bmi;

    // Input weight and height
    printf("Enter weight in kg: ");
    scanf("%f", &weight);
    printf("Enter height in meters: ");
    scanf("%f", &height);

    // Validate
    if (weight <= 0 || height <= 0) {
        printf("Weight and height must be positive.\n");
        return 1;
    }

    // Calculate BMI
    bmi = weight / (height * height);

    // Display BMI
    printf("BMI: %.2f\n", bmi);

    // Optional categorization
    if (bmi < 18.5) {
        printf("Underweight\n");
    } else if (bmi < 25) {
        printf("Normal weight\n");
    } else if (bmi < 30) {
        printf("Overweight\n");
    } else {
        printf("Obese\n");
    }

    return 0;
}