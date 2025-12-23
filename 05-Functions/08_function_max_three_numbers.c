// Function max three numbers
#include <stdio.h>

int maxThree(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Max: %d\n", maxThree(a, b, c));
    return 0;
}