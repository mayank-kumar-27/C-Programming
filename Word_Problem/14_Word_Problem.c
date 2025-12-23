// Program to convert distance from kilometers to miles.
// 1 km = 0.621371 miles
#include <stdio.h>

int main() {
    float km, miles;

    // Input distance in km
    printf("Enter distance in kilometers: ");
    scanf("%f", &km);

    // Validate
    if (km < 0) {
        printf("Distance cannot be negative.\n");
        return 1;
    }

    // Convert
    miles = km * 0.621371;

    // Display
    printf("%.2f km = %.2f miles\n", km, miles);

    return 0;
}