// Program to assign grade based on marks using switch case.
#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks.\n");
        return 1;
    }

    // Using switch with ranges by dividing
    switch (marks / 10) {
        case 10:
        case 9:
            printf("Grade: A\n");
            break;
        case 8:
            printf("Grade: B\n");
            break;
        case 7:
            printf("Grade: C\n");
            break;
        case 6:
            printf("Grade: D\n");
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf("Grade: F\n");
            break;
        default:
            printf("Invalid.\n");
    }

    return 0;
}