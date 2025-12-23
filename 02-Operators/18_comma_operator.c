// Comma operator
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    c = (a++, b++, a + b);
    printf("a: %d, b: %d, c: %d\n", a, b, c);
    return 0;
}