// Program to calculate the average temperature over a week.
#include <stdio.h>

int main() {
    float temperatures[7], sum = 0;

    // Input daily temperatures
    for (int i = 0; i < 7; i++) {
        printf("Enter temperature for day %d: ", i + 1);
        scanf("%f", &temperatures[i]);
    }

    // Calculate sum
    for (int i = 0; i < 7; i++) {
        sum += temperatures[i];
    }

    // Calculate and display average
    float average = sum / 7;
    printf("Average temperature over the week: %.2f\n", average);

    return 0;
}