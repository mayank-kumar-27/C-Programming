// Program to calculate the average score of students in a class.
// Prompts for number of students and their marks, then computes average.
#include <stdio.h>

int main() {
    float marks, totalMarks = 0.0;
    int numStudents;

    // Get number of students
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Validate
    if (numStudents <= 0) {
        printf("Number of students must be positive.\n");
        return 1;
    }

    // Input marks
    for (int i = 1; i <= numStudents; i++) {
        printf("Enter the marks of student %d: ", i);
        scanf("%f", &marks);
        if (marks < 0 || marks > 100) {
            printf("Invalid marks. Assuming 0 for student %d.\n", i);
            marks = 0;
        }
        totalMarks += marks;
    }

    // Calculate and display average
    float average = totalMarks / numStudents;
    printf("The average marks is %.2f\n", average);

    return 0;
}