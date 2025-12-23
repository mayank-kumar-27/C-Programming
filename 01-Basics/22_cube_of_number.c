// Cube of number
#include <stdio.h>

int main() {
    int number, cube;
    printf("Enter a number: ");
    scanf("%d", &number);
    cube = number * number * number;
    printf("Cube of %d is %d\n", number, cube);
    return 0;
}