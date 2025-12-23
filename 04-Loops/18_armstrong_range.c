// Armstrong range
#include <stdio.h>
#include <math.h>

int main() {
    int start, end, i, original, remainder, result, digits;
    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);
    printf("Armstrong numbers: ");
    for (i = start; i <= end; i++) {
        original = i;
        digits = 0;
        while (original != 0) {
            original /= 10;
            digits++;
        }
        original = i;
        result = 0;
        while (original != 0) {
            remainder = original % 10;
            result += pow(remainder, digits);
            original /= 10;
        }
        if (result == i) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}