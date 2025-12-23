// Program to find the difference in days between two dates.
// Assumes dates are in the same year, no leap year handling.
#include <stdio.h>

int main() {
    int day1, month1, day2, month2;
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Input first date
    printf("Enter first date (day month): ");
    scanf("%d %d", &day1, &month1);

    // Input second date
    printf("Enter second date (day month): ");
    scanf("%d %d", &day2, &month2);

    // Validate
    if (month1 < 1 || month1 > 12 || day1 < 1 || day1 > daysInMonth[month1-1] ||
        month2 < 1 || month2 > 12 || day2 < 1 || day2 > daysInMonth[month2-1]) {
        printf("Invalid date(s).\n");
        return 1;
    }

    // Calculate total days for each
    int totalDays1 = day1;
    for (int i = 0; i < month1 - 1; i++) {
        totalDays1 += daysInMonth[i];
    }

    int totalDays2 = day2;
    for (int i = 0; i < month2 - 1; i++) {
        totalDays2 += daysInMonth[i];
    }

    // Difference
    int diff = abs(totalDays1 - totalDays2);
    printf("Difference in days: %d\n", diff);

    return 0;
}