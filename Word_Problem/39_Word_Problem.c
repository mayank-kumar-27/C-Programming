// Program to convert time in seconds to hours, minutes, and seconds.
#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    // Input total seconds
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Validate
    if (totalSeconds < 0) {
        printf("Time cannot be negative.\n");
        return 1;
    }

    // Convert
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    // Display result
    printf("%d seconds is equivalent to %d hours, %d minutes, %d seconds.\n", totalSeconds, hours, minutes, seconds);

    return 0;
}