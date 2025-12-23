// Program to determine the day of the week for a given date.
// Uses a simple calculation (not fully accurate for all dates).
#include <stdio.h>

int main() {
    int day, month, year;
    char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    // Input date
    printf("Enter date (day month year): ");
    scanf("%d %d %d", &day, &month, &year);

    // Adjust month and year for January and February
    if (month < 3) {
        month += 12;
        year--;
    }

    // Zeller's congruence approximation
    int k = year % 100;
    int j = year / 100;
    int h = (day + (13*(month+1))/5 + k + k/4 + j/4 + 5*j) % 7;

    printf("Day of the week: %s\n", days[h]);

    return 0;
}