// Age category
#include <stdio.h>

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    if (age < 13) {
        printf("Child\n");
    } else if (age < 20) {
        printf("Teenager\n");
    } else if (age < 60) {
        printf("Adult\n");
    } else {
        printf("Senior\n");
    }
    return 0;
}