// Greatest three numbers
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);
    if (a >= b && a >= c) {
        printf("%d is greatest\n", a);
    } else if (b >= a && b >= c) {
        printf("%d is greatest\n", b);
    } else {
        printf("%d is greatest\n", c);
    }
    return 0;
}