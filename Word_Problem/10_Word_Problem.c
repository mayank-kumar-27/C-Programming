// Program to find the maximum of three numbers entered by the user.
#include <stdio.h>

int main() {
    int a, b, c, max;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find maximum
    max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    // Display result
    printf("The maximum number is %d\n", max);

    return 0;
}