// Average array elements
#include <stdio.h>

int main() {
    int n, arr[100];
    float sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Average: %.2f\n", sum / n);
    return 0;
}