// Separate positive negative
#include <stdio.h>

int main() {
    int n, arr[100], pos[100], neg[100], p = 0, ne = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] >= 0) pos[p++] = arr[i];
        else neg[ne++] = arr[i];
    }
    printf("Positive: ");
    for (int i = 0; i < p; i++) printf("%d ", pos[i]);
    printf("\nNegative: ");
    for (int i = 0; i < ne; i++) printf("%d ", neg[i]);
    printf("\n");
    return 0;
}