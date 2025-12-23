// Perimeter of rectangle
#include <stdio.h>

int main() {
    float length, width, perimeter;
    printf("Enter length: ");
    scanf("%f", &length);
    printf("Enter width: ");
    scanf("%f", &width);
    perimeter = 2 * (length + width);
    printf("Perimeter of rectangle: %.2f\n", perimeter);
    return 0;
}