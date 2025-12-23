// Associativity demo
#include <stdio.h>

int main() {
    int a, b, c, result;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);
    result = a - b - c;
    printf("a - b - c = %d\n", result);
    result = a - (b - c);
    printf("a - (b - c) = %d\n", result);
    return 0;
}