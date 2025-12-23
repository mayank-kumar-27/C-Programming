// Program to calculate the distance between two points.
#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, distance;

    // Input coordinates
    printf("Enter first point (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter second point (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Calculate distance
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    // Display result
    printf("Distance: %.2f\n", distance);

    return 0;
}