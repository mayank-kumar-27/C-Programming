// Minimum two numbers
#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Minimum: %d\n", min(a, b));
    return 0;
}