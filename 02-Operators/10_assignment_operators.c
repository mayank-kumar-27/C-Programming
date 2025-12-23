// Assignment operators
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);
    printf("a = %d\n", a);
    a += b;
    printf("a += b: %d\n", a);
    a -= b;
    printf("a -= b: %d\n", a);
    a *= b;
    printf("a *= b: %d\n", a);
    if (b != 0) {
        a /= b;
        printf("a /= b: %d\n", a);
        a %= b;
        printf("a %%= b: %d\n", a);
    } else {
        printf("Division by zero not allowed\n");
    }
    return 0;
}