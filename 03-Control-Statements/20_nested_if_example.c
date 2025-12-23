// Nested if example
#include <stdio.h>

int main() {
    int age;
    char gender;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);
    if (age >= 18) {
        if (gender == 'M' || gender == 'm') {
            printf("Adult male\n");
        } else if (gender == 'F' || gender == 'f') {
            printf("Adult female\n");
        } else {
            printf("Invalid gender\n");
        }
    } else {
        printf("Minor\n");
    }
    return 0;
}