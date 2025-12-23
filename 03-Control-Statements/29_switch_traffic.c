// Program to simulate traffic light actions using switch case.
#include <stdio.h>

int main() {
    char color;

    printf("Enter traffic light color (R/G/Y): ");
    scanf(" %c", &color);

    switch (color) {
        case 'R':
        case 'r':
            printf("Stop!\n");
            break;
        case 'G':
        case 'g':
            printf("Go!\n");
            break;
        case 'Y':
        case 'y':
            printf("Slow down!\n");
            break;
        default:
            printf("Invalid color.\n");
    }

    return 0;
}