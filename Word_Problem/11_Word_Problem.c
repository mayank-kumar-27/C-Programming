// Program to check if a given year is a leap year.
// Leap year: divisible by 4, but not by 100 unless also by 400.
#include <stdio.h>

int main() {
    int year;

    // Input year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year (366 days).\n", year);
    } else {
        printf("%d is not a leap year (365 days).\n", year);
    }

    return 0;
}