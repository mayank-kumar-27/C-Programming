// Program to convert a given number of days into years, months, and days.
// Assumes 365 days/year and 30 days/month (approximate).
#include <stdio.h>

int main() {
    int totalDays, years, months, days, remaining;

    // Input total days
    printf("Enter the number of days: ");
    scanf("%d", &totalDays);

    // Validate
    if (totalDays < 0) {
        printf("Days cannot be negative.\n");
        return 1;
    }

    // Calculate years
    years = totalDays / 365;
    remaining = totalDays % 365;

    // Calculate months
    months = remaining / 30;
    days = remaining % 30;

    // Display result
    printf("%d days = %d year(s), %d month(s), and %d day(s)\n", totalDays, years, months, days);

    return 0;
}