// Even odd ternary
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d is %s\n", num, (num % 2 == 0) ? "even" : "odd");
    return 0;
}