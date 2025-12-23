// Function Armstrong
#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int original = n, digits = 0, sum = 0;
    while (original != 0) {
        original /= 10;
        digits++;
    }
    original = n;
    while (original != 0) {
        sum += pow(original % 10, digits);
        original /= 10;
    }
    return sum == n;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    if (isArmstrong(n)) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }
    return 0;
}