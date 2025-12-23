// Program to check voting eligibility based on age.
// Eligible if 18 or older.
#include <stdio.h>

int main() {
    int age;

    // Input age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check eligibility
    if (age < 0) {
        printf("Age cannot be negative.\n");
    } else if (age >= 18) {
        printf("You are eligible to vote!\n");
    } else {
        printf("You are %d years old and not eligible to vote yet.\n", age);
    }

    return 0;
}