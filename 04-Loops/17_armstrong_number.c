// Armstrong number
#include <stdio.h>
#include <math.h>

int main() {
    int n, original, remainder, result = 0, digits = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    original = n;
    while (original != 0) {
        original /= 10;
        digits++;
    }
    original = n;
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, digits);
        original /= 10;
    }
    if (result == n) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }
    return 0;
}