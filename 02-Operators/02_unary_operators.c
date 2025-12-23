// Unary operators
#include <stdio.h>

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Original: %d\n", a);
    printf("Unary plus: %d\n", +a);
    printf("Unary minus: %d\n", -a);
    printf("Logical NOT: %d\n", !a);
    printf("Bitwise NOT: %d\n", ~a);
    return 0;
}