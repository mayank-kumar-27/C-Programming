// Program to calculate total marks, percentage, and grade for 5 subjects.
#include <stdio.h>

int main() {
    float marks[5], total = 0.0, percentage;

    // Input marks
    for (int i = 0; i < 5; i++) {
        printf("Enter marks for subject %d (out of 100): ", i + 1);
        scanf("%f", &marks[i]);
        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks. Setting to 0.\n");
            marks[i] = 0;
        }
        total += marks[i];
    }

    // Calculate percentage
    percentage = (total / 500.0) * 100.0;

    // Display
    printf("Total marks: %.2f/500\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    // Determine grade
    if (percentage >= 95) printf("Grade: A+\n");
    else if (percentage >= 90) printf("Grade: A\n");
    else if (percentage >= 85) printf("Grade: B+\n");
    else if (percentage >= 80) printf("Grade: B\n");
    else if (percentage >= 75) printf("Grade: C+\n");
    else if (percentage >= 70) printf("Grade: C\n");
    else if (percentage >= 60) printf("Grade: D\n");
    else printf("Failed.\n");

    return 0;
}