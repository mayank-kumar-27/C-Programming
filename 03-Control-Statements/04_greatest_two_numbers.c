// Greatest two numbers
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    if (a > b) {
        printf("%d is greater\n", a);
    } else if (b > a) {
        printf("%d is greater\n", b);
    } else {
        printf("Both are equal\n");
    }
    return 0;
}