// Develop a program that determines if a given year is a leap year or not.
#include <stdio.h>
int main()
{
    int year;
    printf("Enter the Year You want to Check a Leap Year or Not :");
    scanf("%d", &year);
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        printf("Yes! The Year is a Leap Year");
    }
    else
    {
        printf("NO! The year is NOT a Leap Year");
    }
    return 0;
}