// Quadratic roots
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;
    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots: %.2f, %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Root: %.2f\n", root1);
    } else {
        printf("No real roots\n");
    }
    return 0;
}