// Duplicate elements
#include <stdio.h>

int main() {
    int n, arr[100], dup[100], count = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                dup[count++] = arr[i];
                break;
            }
        }
    }
    printf("Duplicates: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", dup[i]);
    }
    printf("\n");
    return 0;
}