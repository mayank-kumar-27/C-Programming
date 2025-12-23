// Function pointer calculator
#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int div(int a, int b) { return a / b; }

int main() {
    int a, b, choice;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    printf("1.Add 2.Sub 3.Mul 4.Div: ");
    scanf("%d", &choice);
    int (*op[4])(int, int) = {add, sub, mul, div};
    printf("Result: %d\n", op[choice - 1](a, b));
    return 0;
}