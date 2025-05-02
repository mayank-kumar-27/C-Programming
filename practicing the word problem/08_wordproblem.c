// Write a C program that converts a given number of days into years, months, and days.
#include <stdio.h>
int main()
{
    int Day, Days, Years, Months, Temp;
    printf("Enter the Number of Days :");
    scanf("%d", &Day);

    Years = Day / 365;

    // No of days upon 365 gives the number of years.

    Temp = Day % 365;

    // We have created a temperorary variable which can store the no of days remaining after a year.

    Months = Temp / 30;

    // Then we divided the remaining days by 30 to get the no of months.

    Days = Temp % 30;

    // Then finally we have calculated the remaining number of days after all calculation.

    printf("There are %d Year/Years %d Month/Months and %d Day/Days in %d Entered Days", Years, Months, Days, Day);
    return 0;
}