// Perfect numbers range
#include <stdio.h>

int main() {
    int start, end, i, j, sum;
    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);
    printf("Perfect numbers: ");
    for (i = start; i <= end; i++) {
        sum = 0;
        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}