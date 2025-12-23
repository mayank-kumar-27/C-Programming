// Function add numbers
#include <stdio.h>

int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum: %d\n", addNumbers(a, b));
    return 0;
}