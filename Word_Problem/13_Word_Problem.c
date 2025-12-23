// Program to calculate the area of a rectangle.
// Formula: Area = length * breadth
#include <stdio.h>

int main() {
    float length, breadth, area;

    // Input dimensions
    printf("Enter the length: ");
    scanf("%f", &length);
    printf("Enter the breadth: ");
    scanf("%f", &breadth);

    // Validate
    if (length < 0 || breadth < 0) {
        printf("Dimensions cannot be negative.\n");
        return 1;
    }

    // Calculate area
    area = length * breadth;

    // Display
    printf("Area of rectangle: %.2f\n", area);

    return 0;
}