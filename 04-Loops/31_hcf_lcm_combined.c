// Hcf lcm combined
#include <stdio.h>

int main() {
    int a, b, hcf, lcm, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int x = a, y = b;
    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }
    hcf = x;
    lcm = (a * b) / hcf;
    printf("HCF: %d, LCM: %d\n", hcf, lcm);
    return 0;
}