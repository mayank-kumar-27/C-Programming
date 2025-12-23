// Program to calculate a student's final grade based on marks in multiple subjects.
// Assumes each subject is out of 100, computes percentage and assigns grade.
#include <stdio.h>

int main() {
    int numSubjects;
    float sum = 0.0, percentage;

    // Input number of subjects
    printf("Enter the number of subjects: ");
    scanf("%d", &numSubjects);

    // Validate
    if (numSubjects < 1) {
        printf("Number of subjects must be at least 1.\n");
        return 1;
    }

    // Array for marks
    float marks[numSubjects];

    // Input marks
    for (int i = 0; i < numSubjects; i++) {
        printf("Enter marks for subject %d (out of 100): ", i + 1);
        scanf("%f", &marks[i]);
        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks. Setting to 0.\n");
            marks[i] = 0;
        }
        sum += marks[i];
    }

    // Calculate percentage
    percentage = sum / numSubjects;

    // Display results
    printf("Total marks: %.2f out of %.0f\n", sum, (float)numSubjects * 100);
    printf("Percentage: %.2f%%\n", percentage);

    // Assign grade
    if (percentage >= 95) {
        printf("Grade: A+\n");
    } else if (percentage >= 90) {
        printf("Grade: A\n");
    } else if (percentage >= 85) {
        printf("Grade: B+\n");
    } else if (percentage >= 80) {
        printf("Grade: B\n");
    } else if (percentage >= 75) {
        printf("Grade: C+\n");
    } else if (percentage >= 70) {
        printf("Grade: C\n");
    } else if (percentage >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Failed - No grade assigned.\n");
    }

    return 0;
}