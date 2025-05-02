//  Write a program that converts a given time in seconds to hours, minutes, and seconds.
#include <stdio.h>
int main()
{
    int n, hour, min, sec;
    printf("Enter the Time in Seconds : ");
    scanf("%d", &n);
    hour = n / 3600;
    min = (n % 3600) / 60;
    sec = n % 60;
    printf("\nThe Number of Total Seconds is Equivalent to %d Hours %d Minutes %d Seconds \n", hour, min, sec);
    return 0;
}